#ifndef _EMAIL_SAMPLE_H_
#define _EMAIL_SAMPLE_H_

#include <FApp.h>
#include <FBase.h>
#include <FMessaging.h>

class EmailSample
	: public Tizen::Messaging::IEmailListener,
	  public Tizen::App::IAppControlResponseListener
{
public:
		EmailSample();
		~EmailSample();
		result SendEmail(void);
		void UseEmailAppControl(void);

private:
		virtual void OnEmailMessageSent(result r);
		virtual void OnAppControlCompleteResponseReceived(const Tizen::App::AppId& appId,
				const Tizen::Base::String& operationId,
				Tizen::App::AppCtrlResult appControlResult,
				const Tizen::Base::Collection::IMap* pExtraData);

private:
		Tizen::Messaging::EmailManager* __pEmailManager;
};

#endif // _EMAIL_SAMPLE_H_
