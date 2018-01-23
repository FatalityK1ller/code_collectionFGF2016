#ifndef _MESSAGE_SAMPLE_H_
#define _MESSAGE_SAMPLE_H_

#include <FApp.h>
#include <FBase.h>
#include <FMessaging.h>

class MessageSample
	: public Tizen::App::IAppControlResponseListener
{
public:
		MessageSample();
		~MessageSample();
		void UseMessageAppControl(void);

private:
		virtual void OnAppControlCompleteResponseReceived(const Tizen::App::AppId& appId,
				const Tizen::Base::String& operationId,
				Tizen::App::AppCtrlResult appControlResult,
				const Tizen::Base::Collection::IMap* pExtraData);

};

#endif // _MESSAGE_SAMPLE_H_
