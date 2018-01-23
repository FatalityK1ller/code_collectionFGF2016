#ifndef _SMS_SAMPLE_H_
#define _SMS_SAMPLE_H_

#include <FApp.h>
#include <FBase.h>
#include <FMessaging.h>

class SmsSample
	: public Tizen::Messaging::ISmsListener
 	, public Tizen::Messaging::ISmsMessageEventListener
{
public:
	SmsSample();
	~SmsSample();
	result Initialize(void);
	result SendSms(const Tizen::Base::String& text, const Tizen::Messaging::RecipientList& receipientList);

private:
	virtual void OnSmsMessageSent(result r);
	virtual void OnSmsMessageReceived(const Tizen::Messaging::SmsMessage& message);

private:
	Tizen::Messaging::SmsManager* __pSmsManager;
	Tizen::Base::Collection::ArrayList* __pKeywordList;


};

#endif // _SMS_SAMPLE_H_
