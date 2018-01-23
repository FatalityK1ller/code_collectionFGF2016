#ifndef _NFC_SAMPLE_H_
#define _NFC_SAMPLE_H_

#include <FNet.h>

class NfcSample
	: public Tizen::Net::Nfc::INfcManagerEventListener,
	  public Tizen::Net::Nfc::INfcTagDiscoveryEventListener,
	  public Tizen::Net::Nfc::INdefMessageDiscoveryEventListener,
	  public Tizen::Net::Nfc::INfcDeviceDiscoveryEventListener,
	  public Tizen::Net::Nfc::INdefPushManagerListener
{
public:
	NfcSample();
	~NfcSample();
	result UseNfc(void);
	result CheckTagConnection(void);
	result UseNdefMessage(void);
	result PushNdefMessage(void);

private:
	void OnNfcActivated (result r);
	void OnNfcDeactivated (result r);
	void OnNfcTagDetectedN(Tizen::Net::Nfc::TagConnection* pConnection);
	void OnNfcTagLost(void);
	void OnNdefMessageDetectedN(Tizen::Net::Nfc::NdefMessage *pMessage);
	void OnNfcDeviceDetected(void);
	void OnNfcDeviceLost(void);
	void OnNdefPushMessageSent(result r);

private:
	Tizen::Net::Nfc::NfcManager* __pNfcManager;
	Tizen::Net::Nfc::TagConnection* __pTagConnection;
	Tizen::Net::Nfc::NdefPushManager* __pNdefPushManager;
};


#endif // _NFC_SAMPLE_H_
