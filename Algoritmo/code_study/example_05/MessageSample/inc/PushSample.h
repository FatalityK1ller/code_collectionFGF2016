#ifndef _PUSH_SAMPLE_H_
#define _PUSH_SAMPLE_H_

#include <FApp.h>
#include <FBase.h>
#include <FMessaging.h>

class PushSample
	: Tizen::Messaging::IPushManagerListener
	, Tizen::Messaging::IPushEventListener
{
public:
	PushSample();
	~PushSample();
	void Initialize(void);
	result Register(void);
	result Send(void);
	result CheckUnreadMessage(void);

private:
	void OnPushMessageSent(RequestId reqId, const Tizen::Base::String& registrationId, result r, const Tizen::Base::String& errorCode, const Tizen::Base::String& errorMsg);
	void OnPushServiceRegistered(RequestId reqId, const Tizen::Base::String &registrationId, result r, const Tizen::Base::String& errorCode, const Tizen::Base::String& errorMsg);
	void OnPushServiceUnregistered(RequestId reqId, result r, const Tizen::Base::String& errorCode, const Tizen::Base::String& errorMsg);

	void OnPushMessageReceived(const Tizen::Messaging::PushMessage& message);

private:
	Tizen::Messaging::PushManager* __pPushManager;
};

#endif // _PUSH_SAMPLE_H_
