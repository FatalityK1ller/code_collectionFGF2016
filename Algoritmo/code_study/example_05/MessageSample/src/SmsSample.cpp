#include "SmsSample.h"

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Messaging;

SmsSample::SmsSample()
: __pSmsManager(null), __pKeywordList(null)
{

}

SmsSample::~SmsSample()
{
	if(__pSmsManager != null)
	{
		delete __pSmsManager;
	}
}

result
SmsSample::Initialize(void)
{
	result r = E_SUCCESS;

	__pSmsManager = new (std::nothrow) SmsManager;
	AppLogException("__pSmsManager is null");
	r = __pSmsManager->Construct(*this);
	r = __pSmsManager->AddSmsMessageEventListener(*this);

	return r;
}

result
SmsSample::SendSms(const String& text, const RecipientList & recipientList)
{
	result r = E_SUCCESS;

	SmsMessage sms;
	sms.SetText(text);
	__pSmsManager->Send(sms, recipientList, true);

	return r;
}

void
SmsSample::OnSmsMessageSent(result r)
{
	if(IsFailed(r))
	{
		AppLogException("Exception[%s]", GetErrorMessage(r));
	}
}

void
SmsSample::OnSmsMessageReceived(const SmsMessage& message)
{
	String text = message.GetText();
	IEnumerator* pEnum = __pKeywordList->GetEnumeratorN();
	while (pEnum->MoveNext() == E_SUCCESS)
	{
		String* pKeyword = static_cast<String*>(pEnum->GetCurrent());
		if (text.Contains(*pKeyword))
		{
			AppLog("The keyword is included (%ls)", pKeyword->GetPointer());
			//Do something
		}
	}
	delete pEnum;

}

