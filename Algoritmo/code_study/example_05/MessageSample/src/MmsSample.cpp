#include "MmsSample.h"

using namespace Tizen::Base;
using namespace Tizen::Messaging;

MmsSample::MmsSample()
: __pMmsManager(null)
{

}

MmsSample::~MmsSample()
{
	if(__pMmsManager)
	{
		delete __pMmsManager;
	}
}

result
MmsSample::SendMms(void)
{
	result r = E_SUCCESS;

	__pMmsManager = new (std::nothrow) MmsManager();
	r = __pMmsManager->Construct(*this);

	MmsMessage mmsMessage;
	r = mmsMessage.SetSubject(L"MMS Subject");
	r = mmsMessage.SetText(L"Please refer to the attached file.");
	r = mmsMessage.AddAttachment(MMS_IMAGE, L"res/image.jpg");
	r = mmsMessage.AddAttachment(MMS_AUDIO, L"res/audio.wav");

	RecipientList recipient;
	r = recipient.Add (RECIPIENT_TYPE_TO, L"1012345678901");
	r = recipient.Add (RECIPIENT_TYPE_CC, L"1012345678902");
	r = recipient.Add (RECIPIENT_TYPE_BCC, L"1012345678903");

	r = __pMmsManager->Send(mmsMessage, recipient, true);

	return r;
}

void
MmsSample::OnMmsMessageSent(result r)
{
	AppLog("result(%s)", GetErrorMessage(r));
}
