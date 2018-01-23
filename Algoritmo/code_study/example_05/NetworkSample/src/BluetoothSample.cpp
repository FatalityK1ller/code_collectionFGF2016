#include <FSystem.h>
#include "BluetoothSample.h"

using namespace Tizen::App;;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Net::Bluetooth;
using namespace Tizen::System;

BluetoothSample::BluetoothSample()
: __pBluetoothManager(null), __pBluetoothDeviceList(null)
{

}

BluetoothSample::~BluetoothSample()
{

}

result
BluetoothSample::UseBluetooth(void)
{
	result r = E_SUCCESS;
	bool isBluetooth;

	r = SystemInfo::GetValue(L"http://tizen.org/feature/network.bluetooth", isBluetooth);
	if(!isBluetooth)
	{
		AppLog("The Bluetooth is not supported.");
		return r;
	}

	__pBluetoothManager = new (std::nothrow) BluetoothManager();
	r = __pBluetoothManager->Construct(*this);

	r = __pBluetoothManager->Activate();

	return r;
}

result
BluetoothSample::UseBluetoothAppControl(void)
{
	result r = E_SUCCESS;
	AppControl* pAc = AppManager::FindAppControlN(L"tizen.bluetooth", L"http://tizen.org/appcontrol/operation/bluetooth/pick");
	if (pAc != null)
	{
		r = pAc->Start(null, null, null, this);
		delete pAc;
	}

	return r;
}

void
BluetoothSample::OnBluetoothActivated(result r)
{
	result rr = E_SUCCESS;

	if(IsFailed(r))
	{
		rr = __pBluetoothManager->SetBluetoothDeviceListener(this);
		rr = __pBluetoothManager->StartDiscovery();
	}
}

void
BluetoothSample::OnBluetoothDeactivated(result r)
{

}

void
BluetoothSample::OnBluetoothDiscoverableModeChanged(Tizen::Net::Bluetooth::BluetoothDiscoverableMode mode)
{

}

void
BluetoothSample::OnBluetoothDiscoveryDone(bool isCompleted)
{
	result r = E_SUCCESS;

	if(isCompleted)
	{
		BluetoothDevice* pTargetDevice = static_cast<BluetoothDevice*>(__pBluetoothDeviceList->GetAt(0));
		if(pTargetDevice != null)
		{
			r = __pBluetoothManager->Pair(*pTargetDevice);
		}
	}

}

void
BluetoothSample::OnBluetoothDiscoveryStarted(result r)
{

}

void
BluetoothSample::OnBluetoothPaired(const BluetoothDevice& pairedDevice)
{
	//Check the paired device
}

void
BluetoothSample::OnBluetoothPairingFailed(result r)
{

}

void
BluetoothSample::OnBluetoothRemoteDeviceFoundN(BluetoothDevice* pFoundDevice)
{
	result r = E_SUCCESS;

	if(__pBluetoothDeviceList == null)
	{
		__pBluetoothDeviceList = new (std::nothrow) ArrayList();
		r = __pBluetoothDeviceList->Construct();
	}
	if(pFoundDevice != null)
	{
		r = __pBluetoothDeviceList->Add(pFoundDevice);
	}
}

void
BluetoothSample::OnBluetoothServiceListReceived(const BluetoothDevice& targetDevice, unsigned long serviceList, result r)
{

}

void
BluetoothSample::OnBluetoothUnpaired(const BluetoothDevice& unpairedDevice)
{

}

void
BluetoothSample::OnAppControlCompleteResponseReceived(const AppId& appId, const String& operationId, AppCtrlResult appControlResult, const IMap* pExtraData)
{
	if ((appId == L"tizen.bluetooth") && (operationId == L"http://tizen.org/appcontrol/operation/bluetooth/pick"))
	{
		if (appControlResult == APP_CTRL_RESULT_SUCCEEDED)
		{
			BluetoothDevice* pDevice = BluetoothDevice::GetInstanceFromAppControlResultN(*pExtraData);
			//Handle the received bluetooth device
		}
	}
}
