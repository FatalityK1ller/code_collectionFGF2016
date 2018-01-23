#include "WifiSample.h"

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Net::Wifi;

WifiSample::WifiSample()
: __pWifiManager(null), __pWifiDirectDevice(null)
{

}

WifiSample::~WifiSample()
{

}

result
WifiSample::UseWifi(void)
{
	result r = E_SUCCESS;
	__pWifiManager = new (std::nothrow) WifiManager();
	r = __pWifiManager->Construct(*this);

	if(!__pWifiManager->IsActivated())
	{
		r = __pWifiManager->Activate();
	}
	else
	{
		r = __pWifiManager->Scan();
	}

	return r;
}

result
WifiSample::UseWifiDirect(void)
{
	result r = E_SUCCESS;

	__pWifiDirectDevice = WifiDirectDeviceManager::GetWifiDirectDeviceN();
	if(!__pWifiDirectDevice->IsActivated())
	{
		r = __pWifiDirectDevice->Activate();
	}

	return r;
}

void
WifiSample::OnWifiActivated(result r)
{
	result rr = E_SUCCESS;
	if(!IsFailed(r))
	{
		rr = __pWifiManager->Scan();
	}

}

void
WifiSample::OnWifiConnected(const String& ssid, result r)
{
	if (!IsFailed(r))
	{
		WifiBssInfo* pBssInfo = __pWifiManager->GetConnectionTargetInfoN();
		//Check BSS info
	}
}

void
WifiSample::OnWifiDeactivated(result r)
{

}

void
WifiSample::OnWifiDisconnected(void)
{

}

void
WifiSample::OnWifiRssiChanged(long rssi)
{

}

void
WifiSample::OnWifiScanCompletedN(const IList* pWifiBssInfoList, result r)
{
	result rr = E_SUCCESS;
	if(!IsFailed(r))
	{
		IEnumerator* pEnum = pWifiBssInfoList->GetEnumeratorN();
		while(pEnum->MoveNext() == E_SUCCESS)
		{
			WifiBssInfo* pBssInfo = static_cast<WifiBssInfo*>(pEnum->GetCurrent());
			WifiSecurityInfo* pSecurityInfo = const_cast<WifiSecurityInfo*>(pBssInfo->GetSecurityInfo());
			if(pSecurityInfo->GetEncryptionType() != WIFI_ENCRYPTION_NONE)
			{
				pSecurityInfo->SetNetworkKey(L"01234");
			}
			rr = __pWifiManager->Connect(*pBssInfo);
		}
	}
}

void
WifiSample::OnWifiDirectAutonomousGroupCreated(WifiDirectDeviceId localDeviceId, result r)
{
	result rr = E_SUCCESS;

	if(!IsFailed(r))
	{
		WifiDirectGroupInfo* pWifiDirectGroupInfo = __pWifiDirectDevice->GetGroupSettingInfoN();
		if(pWifiDirectGroupInfo != null)
		{
			rr = pWifiDirectGroupInfo->SetMaxNumberOfClients(MAX_WIFI_DIRECT_CONNECTED_CLIENTS);
		}
	}
}

void
WifiSample::OnWifiDirectConnected(WifiDirectDeviceId localDeviceId, const WifiDirectDeviceInfo& remoteDeviceInfo, result r)
{
	result rr = E_SUCCESS;

	if(!IsFailed(r))
	{
		//Handle the connected Wi-Fi Direct device
		WifiDirectDeviceId remoteDeviceId = remoteDeviceInfo.GetDeviceId();
		//...
		rr = __pWifiDirectDevice->Disconnect(remoteDeviceInfo);
	}
}

void
WifiSample::OnWifiDirectDeviceActivated(WifiDirectDeviceId localDeviceId, result r)
{
	result rr = E_SUCCESS;

	if(!IsFailed(r))
	{
		rr = __pWifiDirectDevice->Scan();
	}
}

void
WifiSample::OnWifiDirectDeviceDeactivated(WifiDirectDeviceId localDeviceId, result r)
{

}

void
WifiSample::OnWifiDirectDisconnected(WifiDirectDeviceId localDeviceId, const String& peerMacAddress, result r)
{
	result rr = E_SUCCESS;

	if(!IsFailed(r))
	{
		rr = __pWifiDirectDevice->CreateAutonomousGroup();
	}
}

void
WifiSample::OnWifiDirectGroupLeft(WifiDirectDeviceId localDeviceId, result r)
{

}

void
WifiSample::OnWifiDirectRemoteDeviceFound(WifiDirectDeviceId localDeviceId, const WifiDirectDeviceInfo& remoteDeviceInfo)
{

}

void
WifiSample::OnWifiDirectScanCompletedN(WifiDirectDeviceId localDeviceId, IList* pWifiDirectDeviceInfoList, result r)
{
	result rr = E_SUCCESS;

	if(!IsFailed(r))
	{
		WifiDirectDeviceInfo* pTargetDeviceInfo = static_cast<WifiDirectDeviceInfo*>(pWifiDirectDeviceInfoList->GetAt(0));
		rr = __pWifiDirectDevice->Connect(*pTargetDeviceInfo);
	}
}


