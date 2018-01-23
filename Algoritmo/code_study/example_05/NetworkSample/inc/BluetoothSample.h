#ifndef _BLUETOOTH_SAMPLE_H_
#define _BLUETOOTH_SAMPLE_H_

#include <FApp.h>
#include <FBase.h>
#include <FNet.h>

class BluetoothSample
	: public Tizen::Net::Bluetooth::IBluetoothManagerEventListener,
	  public Tizen::Net::Bluetooth::IBluetoothDeviceEventListener,
	  public Tizen::App::IAppControlResponseListener
{
public:
	BluetoothSample();
	~BluetoothSample();

	result UseBluetooth(void);
	result UseBluetoothAppControl(void);

private:
	void OnBluetoothActivated(result r);
	void OnBluetoothDeactivated(result r);
	void OnBluetoothDiscoverableModeChanged(Tizen::Net::Bluetooth::BluetoothDiscoverableMode mode);

	void OnBluetoothDiscoveryDone(bool isCompleted);
	void OnBluetoothDiscoveryStarted(result r);
	void OnBluetoothPaired(const Tizen::Net::Bluetooth::BluetoothDevice& pairedDevice);
	void OnBluetoothPairingFailed(result r);
	void OnBluetoothRemoteDeviceFoundN(Tizen::Net::Bluetooth::BluetoothDevice* pFoundDevice);
	void OnBluetoothServiceListReceived(const Tizen::Net::Bluetooth::BluetoothDevice& targetDevice, unsigned long serviceList, result r);
	void OnBluetoothUnpaired(const Tizen::Net::Bluetooth::BluetoothDevice& unpairedDevice);

	void OnAppControlCompleteResponseReceived(const Tizen::App::AppId& appId,
			const Tizen::Base::String& operationId,
			Tizen::App::AppCtrlResult appControlResult,
			const Tizen::Base::Collection::IMap* pExtraData);

private:
	Tizen::Net::Bluetooth::BluetoothManager* __pBluetoothManager;
	Tizen::Base::Collection::ArrayList* __pBluetoothDeviceList;
};

#endif // _BLUETOOTH_SAMPLE_H_
