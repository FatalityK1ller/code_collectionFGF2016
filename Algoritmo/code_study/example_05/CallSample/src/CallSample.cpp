#include <FApp.h>
#include "CallSample.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Telephony;


CallSample::CallSample(void)
	: __pCallManager(null), __pNetworkManager(null), __pSimStateManager(null), __callType(TYPE_UNDEFINED_CALL), __callStatus(CALL_STATUS_UNDEFINED)
{
}

CallSample::~CallSample(void)
{
	if (__pCallManager)
	{
		delete __pCallManager;
	}
	if (__pNetworkManager)
	{
		delete __pNetworkManager;
	}
	if (__pSimStateManager)
	{
		delete __pSimStateManager;
	}
}

result
CallSample::ShowCallAppControl(const String& uri)
{
	result r = E_SUCCESS;

	HashMap extraData;
	extraData.Construct();
	String key = L"http://tizen.org/appcontrol/data/call/type";
	String val = L"voice";
	extraData.Add(&key, &val);

	AppControl* pAc = AppManager::FindAppControlN(L"tizen.call", L"http://tizen.org/appcontrol/operation/call");
	if (pAc)
	{
		pAc->Start(&uri, null, &extraData, null);
		delete pAc;
	}

	return r;
}

result
CallSample::ShowPhoneAppControl(const String& uri)
{
	result r = E_SUCCESS;
	String telUri = L"tel:";

	AppControl* pAc = AppManager::FindAppControlN(L"tizen.phone", L"http://tizen.org/appcontrol/operation/dial");
	if (pAc)
	{
		telUri.Append(uri);
	    r = pAc->Start(&telUri, null, null, null);
	    delete pAc;
	}

	return r;

}

result
CallSample::UseCallManager(void)
{
	result r = E_SUCCESS;

	if(__pCallManager != null)
	{
		__pCallManager = new (std::nothrow) CallManager();
		r = __pCallManager->Construct(*this);
	}

	return r;
}

void
CallSample::CheckCurrentCallInfo(void)
{
    __callStatus = __pCallManager->GetCurrentCallStatus();
    if (__callStatus == CALL_STATUS_COMMUNICATING)
    {
        __callType = __pCallManager->GetCurrentCallType();
    }

}

result
CallSample::UseTelephonyNetworkManager(void)
{
	result r = E_SUCCESS;

	if(__pNetworkManager != null)
	{
		__pNetworkManager = new (std::nothrow) NetworkManager();
		r = __pNetworkManager->Construct(this);
	}
	if(__pSimStateManager != null)
	{
		__pSimStateManager = new (std::nothrow) SimStateManager();
		r = __pSimStateManager->Construct();
		r = __pSimStateManager->SetSimEventListener(this);
	}

	return r;
}

result
CallSample::UseNetworkManager(void)
{
	result r = E_SUCCESS;

	return r;
}

void
CallSample::OnTelephonyCallStatusChangedN(CallStatus callStatus, CallInfo* pCallInfo)
{
	CallType callType;
	String number;

	if (callStatus == CALL_STATUS_RINGING)
	{
		callType = pCallInfo->GetCallType();
		number = pCallInfo->GetNumber();
	}
}

void
CallSample::OnTelephonyNetworkStatusChanged (const NetworkStatus& networkStatus)
{
	if(!networkStatus.IsCallServiceAvailable())
	{
		AppLogException("The call service is unavailable!");
	}

	if(!networkStatus.IsDataServiceAvailable())
	{
		AppLogException("The data service is unavailable!");
	}
	if(networkStatus.IsRoaming())
	{
		AppLog("You're using a roaming service.");
	}

}

void
CallSample::OnTelephonySimStateChanged (SimState state)
{
	if (state != SIM_STATE_READY)
	{
		AppLogException("The SIM is not ready!");
	}
}
