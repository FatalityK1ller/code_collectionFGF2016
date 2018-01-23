#include "FLocales.h"
#include "PushSample.h"

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Locales;
using namespace Tizen::Messaging;

PushSample::PushSample()
: __pPushManager(null)
{

}

PushSample::~PushSample()
{

}

void
PushSample::Initialize(void)
{
	if(__pPushManager == null)
	{
		__pPushManager = new (std::nothrow) PushManager();
		__pPushManager->Construct(*this, *this);
	}
}

result
PushSample::Register(void)
{
	result r = E_SUCCESS;

	Initialize();
	RequestId reqId;
	r = __pPushManager->RegisterPushService(reqId);

	return r;
}

result
PushSample::Send(void)
{
	result r = E_SUCCESS;

	return r;
}

result
PushSample::CheckUnreadMessage(void)
{
	result r = E_SUCCESS;

	IList* pUnreadMessageList = __pPushManager->GetUnreadMessagesN();
	IEnumerator* pEnum = pUnreadMessageList->GetEnumeratorN();
	while(pEnum->MoveNext() == E_SUCCESS)
	{
		PushMessage* pPushMessage = static_cast<PushMessage*>(pEnum->GetCurrent());
		//Handle the message
	}

	delete pUnreadMessageList;

	return r;
}

void
PushSample::OnPushMessageSent(RequestId reqId, const String& registrationId, result r, const String& errorCode, const String& errorMsg)
{

}

void
PushSample::OnPushServiceRegistered(RequestId reqId, const String &registrationId, result r, const String& errorCode, const String& errorMsg)
{
	//Check an error
	//Send 'registrationId' to the Application Server
}

void
PushSample::OnPushServiceUnregistered(RequestId reqId, result r, const String& errorCode, const String& errorMsg)
{

}

void
PushSample::OnPushMessageReceived(const PushMessage& message)
{
	DateTime receivedTime;
	receivedTime = message.GetReceivedTime();

	LocaleManager localeManager;
	localeManager.Construct();
	TimeZone timezone = localeManager.GetSystemTimeZone();
	DateTime wallTime = timezone.UtcTimeToWallTime(receivedTime);

	String text = message.GetNotification().GetAppMessage();
}



