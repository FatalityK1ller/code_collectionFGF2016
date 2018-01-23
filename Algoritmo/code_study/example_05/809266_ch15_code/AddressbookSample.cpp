#include "AddressbookSample.h"

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Social;

AddressbookSample::AddressbookSample()
	: __pAddressbookManager(null), __pDefaultAddressbook(null)
{

}

AddressbookSample::~AddressbookSample()
{

}

result
AddressbookSample::Initialize(void)
{
	result r = E_SUCCESS;

	if (__pAddressbookManager == null)
	{
		__pAddressbookManager = AddressbookManager::GetInstance();
		TryReturn(__pAddressbookManager != null, r = GetLastResult(), "[%s]", GetErrorMessage(r));
	}

	return r;
}

void
AddressbookSample::CreateAddressbook(AccountId accountId)
{
	result r = E_SUCCESS;

	r = Initialize();

	String strAccountId(accountId);
	String accountName = strAccountId + L"addbess book";
	Addressbook* pAddressbook = __pAddressbookManager->CreateAddressbookN(accountId, accountName);
	r = GetLastResult();
	if (!IsFailed(r))
	{
		AppLog("The ID of the created address book is %d", pAddressbook->GetId());
	}
	else
	{
		AppLog("Addressbook is not created - [%s] exception", GetErrorMessage(r));
	}
}

result
AddressbookSample::AddContact(void)
{
	result r = E_SUCCESS;

	r = Initialize();
	Addressbook* pAddressbook = __pAddressbookManager->GetAddressbookN();

	Contact contact;
	r = contact.SetValue(CONTACT_PROPERTY_ID_FIRST_NAME, L"Emilly");
	r = contact.SetValue(CONTACT_PROPERTY_ID_LAST_NAME, L"Johnson");
	PhoneNumber phoneNumber(PHONENUMBER_TYPE_MOBILE, L"0123456789");
	r = contact.AddPhoneNumber(phoneNumber);

	r = pAddressbook->AddContact(contact);

	Category category1;
	category1.SetName(L"Friend");
	r = pAddressbook->AddCategory(category1);
	r = pAddressbook->AddMemberToCategory(category1.GetRecordId(), contact.GetRecordId());

	Category category2;
	category2.SetName(L"Company");
	r = pAddressbook->AddCategory(category2);
	r = pAddressbook->AddMemberToCategory(category2.GetRecordId(), contact.GetRecordId());

	delete pAddressbook;

	return r;
}


result
AddressbookSample::MergeContacts(Contact& sourceContact, Contact& targetContact)
{
	result r = E_SUCCESS;

	r = Initialize();
	r = __pAddressbookManager->MergePersons(sourceContact.GetPersonId(), targetContact.GetPersonId());

	return r;
}

result
AddressbookSample::SearchContacsWithNameInAddressbook(void)
{
	result r = E_SUCCESS;

	r = Initialize();
	Addressbook* pAddressbook = __pAddressbookManager->GetAddressbookN();
	IList* pContactList = pAddressbook->SearchContactsByNameN(L"Cooper");
	r = GetLastResult();
	if (!IsFailed(r))
	{
		AppLog("[%s]", GetErrorMessage(r));
		delete pAddressbook;
		return r;
	}

	Contact* pContact = null;
	IEnumerator* pEnumerator = pContactList->GetEnumeratorN();
	while (pEnumerator->MoveNext())
	{
		pContact = static_cast<Contact*>(pEnumerator->GetCurrent());
		// Check values in the contact
	}

	delete pEnumerator;
	delete pContactList;
	delete pAddressbook;
	return r;
}

result
AddressbookSample::SearchContacsWithCategoryInAddressbook(void)
{
	result r = E_SUCCESS;

	r = Initialize();
	Addressbook* pAddressbook = __pAddressbookManager->GetAddressbookN();

	IList* pCategoryList = pAddressbook->GetAllCategoriesN();
	if(pCategoryList == null)
	{
		r = GetLastResult();
		AppLog("[%s]", GetErrorMessage(r));
		delete pAddressbook;
		return r;
	}

	Category *pCategory = static_cast<Category*>(pCategoryList->GetAt(0));
	IList* pContactList = pAddressbook->GetContactsByCategoryN(pCategory->GetRecordId());
	if(pCategoryList == null)
	{
		r = GetLastResult();
		AppLog("[%s]", GetErrorMessage(r));
		delete pCategoryList;
		delete pAddressbook;
		return r;
	}

	Contact* pContact = null;
	IEnumerator* pEnumerator = pContactList->GetEnumeratorN();
	while (pEnumerator->MoveNext())
	{
		pContact = static_cast<Contact*>(pEnumerator->GetCurrent());
		// Check values in the contact
	}

	delete pEnumerator;
	delete pContactList;
	delete pCategoryList;
	delete pAddressbook;
	return r;
}

result
AddressbookSample::SearchCategoriesWithContactInAddress(void)
{
	result r = E_SUCCESS;

	r = Initialize();
	Addressbook* pAddressbook = __pAddressbookManager->GetAddressbookN();
	IList* pContactList = pAddressbook->SearchContactsByNameN(L"Cooper");
	r = GetLastResult();
	if (!IsFailed(r))
	{
		AppLog("[%s]", GetErrorMessage(r));
		delete pAddressbook;
		return r;
	}

	Contact* pContact = static_cast<Contact*>(pContactList->GetAt(0));
	IList* pCategoryList = pAddressbook->GetCategoriesByContactN(pContact->GetRecordId());
	r = GetLastResult();
	if (!IsFailed(r))
	{
		AppLog("[%s]", GetErrorMessage(r));
		delete pContactList;
		delete pAddressbook;
		return r;
	}
	Category* pCategory = null;
	IEnumerator* pEnumerator = pContactList->GetEnumeratorN();
	while (pEnumerator->MoveNext())
	{
		pCategory = static_cast<Category*>(pEnumerator->GetCurrent());
		// Check the category
	}

	delete pEnumerator;
	delete pContactList;
	delete pCategoryList;
	delete pAddressbook;
	return r;
}

result
AddressbookSample::SearchWithAddressbookFilter(void)
{
	result r = E_SUCCESS;

	r = Initialize();

	AddressbookFilter filter(AB_FI_TYPE_CONTACT);
	filter.AppendString(FI_CONJ_OP_NONE, CONTACT_FI_PR_DISPLAY_NAME, FI_STR_OP_CONTAIN, L"Emil");

	IList* pContactList = __pAddressbookManager->SearchN(filter, CONTACT_FI_PR_DISPLAY_NAME, SORT_ORDER_ASCENDING);
	// Check contacts

	return r;
}
