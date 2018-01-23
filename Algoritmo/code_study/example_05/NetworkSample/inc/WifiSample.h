#ifndef _WIFI_SAMPLE_H_
#define _WIFI_SAMPLE_H_

#include <FBase.h>
#include <FNet.h>

class WifiSample
	: public Tizen::Net::Wifi::IWifiManagerEventListener,
	  public Tizen::Net::Wifi::IWifiDirectDeviceListener
{
public:
	WifiSample();
	~WifiSample();
	result UseWifi(void);
	result UseWifiDirect(void);

private:
	void OnWifiActivated(result r);
	void OnWifiConnected(const Tizen::Base::String& ssid, result r);
	void OnWifiDeactivated(result r);
	void OnWifiDisconnected(void);
	void OnWifiRssiChanged(long rssi);
	void OnWifiScanCompletedN(const Tizen::Base::Collection::IList* pWifiBssInfoList, result r);

	void OnWifiDirectAutonomousGroupCreated(Tizen::Net::Wifi::WifiDirectDeviceId localDeviceId, result r);
	void OnWifiDirectConnected(Tizen::Net::Wifi::WifiDirectDeviceId localDeviceId, const Tizen::Net::Wifi::WifiDirectDeviceInfo& remoteDeviceInfo, result r);
	void OnWifiDirectDeviceActivated(Tizen::Net::Wifi::WifiDirectDeviceId localDeviceId, result r);
	void OnWifiDirectDeviceDeactivated(Tizen::Net::Wifi::WifiDirectDeviceId localDeviceId, result r);
	void OnWifiDirectDisconnected(Tizen::Net::Wifi::WifiDirectDeviceId localDeviceId, const Tizen::Base::String& peerMacAddress, result r);
	void OnWifiDirectGroupLeft(Tizen::Net::Wifi::WifiDirectDeviceId localDeviceId, result r);
	void OnWifiDirectRemoteDeviceFound(Tizen::Net::Wifi::WifiDirectDeviceId localDeviceId, const Tizen::Net::Wifi::WifiDirectDeviceInfo& remoteDeviceInfo);
	void OnWifiDirectScanCompletedN(Tizen::Net::Wifi::WifiDirectDeviceId localDeviceId, Tizen::Base::Collection::IList* pWifiDirectDeviceInfoList, result r);

private:
	Tizen::Net::Wifi::WifiManager* __pWifiManager;
	Tizen::Net::Wifi::WifiDirectDevice* __pWifiDirectDevice;

};

#endif // _WIFI_SAMPLE_H_
