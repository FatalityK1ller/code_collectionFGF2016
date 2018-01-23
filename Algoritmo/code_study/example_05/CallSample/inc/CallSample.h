#ifndef _CALL_SAMPLE_H_
#define _CALL_SAMPLE_H_

#include <FTelephony.h>

class CallSample
	: public Tizen::Telephony::ITelephonyCallEventListener
	, public Tizen::Telephony::ITelephonyNetworkEventListener
	, public Tizen::Telephony::ITelephonyNetworkSettingListener
	, public Tizen::Telephony::ITelephonySimEventListener
{
public:
	CallSample(void);
	virtual ~CallSample(void);

	result ShowPhoneAppControl(const Tizen::Base::String& uri);
	result ShowCallAppControl(const Tizen::Base::String& uri);
	result UseCallManager(void);
	result UseTelephonyNetworkManager(void);
	void CheckCurrentCallInfo(void);
	result UseNetworkManager(void);

private:
	virtual void OnTelephonyCallStatusChangedN(Tizen::Telephony::CallStatus callStatus, Tizen::Telephony::CallInfo* pCallInfo);
	virtual void OnTelephonyNetworkStatusChanged (const Tizen::Telephony::NetworkStatus& networkStatus);
	virtual void OnTelephonySimStateChanged (Tizen::Telephony::SimState state);

private:
	Tizen::Telephony::CallManager* __pCallManager;
	Tizen::Telephony::NetworkManager* __pNetworkManager;
	Tizen::Telephony::SimStateManager* __pSimStateManager;
	Tizen::Telephony::CallType __callType;
	Tizen::Telephony::CallStatus __callStatus;

};

#endif // _CALL_SAMPLE_H_
