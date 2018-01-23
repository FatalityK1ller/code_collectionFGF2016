#include <FBase.h>
#include <FSystem.h>
#include "NfcSample.h"

using namespace Tizen::Base;
using namespace Tizen::Net::Nfc;
using namespace Tizen::System;

NfcSample::NfcSample()
	: __pNfcManager(null), __pTagConnection(null), __pNdefPushManager(null)
{

}

NfcSample::~NfcSample()
{

}

result
NfcSample::UseNfc(void)
{
	result r = E_SUCCESS;
	bool isNfc = false;

	r = SystemInfo::GetValue(L"http://tizen.org/feature/network.nfc", isNfc);
	if(!isNfc)
	{
		AppLog("The NFC is not supported.");
		return r;
	}

	__pNfcManager = new (std::nothrow)NfcManager();
	r = __pNfcManager->Construct(*this);

	if(!(__pNfcManager->IsActivated()))
	{
		r = __pNfcManager->Activate();
	}

	return r;
}

result
NfcSample::CheckTagConnection(void)
{
	result r = E_SUCCESS;

	if(__pNfcManager->IsTagConnected())
	{
		__pTagConnection = __pNfcManager->GetCurrentTagConnectionN();
	}
	else
	{
		r = __pNfcManager->AddTagDiscoveryEventListener(*this, NFC_TAG_TYPE_ALL);
	}

	return r;
}

result
NfcSample::UseNdefMessage(void)
{
	result r = E_SUCCESS;

	r = __pNfcManager->AddNdefMessageDiscoveryEventListener(*this, NdefRecordType(NDEF_TNF_ALL));

	return r;
}

result
NfcSample::PushNdefMessage(void)
{
	result r = E_SUCCESS;

	r = __pNfcManager->AddDeviceDiscoveryEventListener(*this);

	return r;
}

void
NfcSample::OnNfcActivated (result r)
{
	result rr = E_SUCCESS;

	AppLogIf(!IsFailed(r), "Activate() is failed.");
	rr = CheckTagConnection();
}

void
NfcSample::OnNfcDeactivated (result r)
{
	AppLogIf(!IsFailed(r), "Deactivate() is failed.");
}

void
NfcSample::OnNfcTagDetectedN(TagConnection* pConnection)
{
	NfcTag* pNfcTag = null;

	__pTagConnection = pConnection;
	//Handle tag information
}

void
NfcSample::OnNfcTagLost(void)
{

}

void
NfcSample::OnNdefMessageDetectedN (NdefMessage *pMessage)
{
	NdefRecord* pRecord = pMessage->GetRecordAt(0);
	String id = pRecord->GetPayloadId();

	NdefRecordType type = pRecord->GetRecordType();
	ByteBuffer* pPayload = pRecord->GetPayload();
	NdefRecordTypeNameFormat typeNameFormat = type.GetNameFormat();
	String typeName = type.GetName();
}

void
NfcSample::OnNfcDeviceDetected (void)
{
	result r = E_SUCCESS;

	__pNdefPushManager->SetNdefPushManagerListener(this);

	NdefMessage ndefMessage;
	//Set NDEF message
	r = __pNdefPushManager->Push(ndefMessage);
}

void
NfcSample::OnNfcDeviceLost(void)
{

}

void
NfcSample::OnNdefPushMessageSent(result r)
{
	AppLogIf(!IsFailed(r), "Push() is failed.");
}


