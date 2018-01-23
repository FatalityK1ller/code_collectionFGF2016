#ifndef _MMS_SAMPLE_H_
#define _MMS_SAMPLE_H_

#include <FApp.h>
#include <FBase.h>
#include <FMessaging.h>

class MmsSample
	: public Tizen::Messaging::IMmsListener
{
public:
		MmsSample();
		~MmsSample();
		result SendMms(void);

private:
		virtual void OnMmsMessageSent(result r);

private:
		Tizen::Messaging::MmsManager* __pMmsManager;
};

#endif // _MMS_SAMPLE_H_
