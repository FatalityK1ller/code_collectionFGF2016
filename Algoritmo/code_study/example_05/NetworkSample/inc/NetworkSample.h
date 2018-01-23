#ifndef _NETWORK_SAMPLE_H_
#define _NETWORK_SAMPLE_H_

#include <FNet.h>

class NetworkSample
	: public Tizen::Net::IManagedNetConnectionEventListener,
	  public Tizen::Net::INetConnectionEventListener
{
public:
	NetworkSample();
	~NetworkSample();

	result Initialize(void);
	result SetNetworkPreference(void);
	result UseDefaultNetConnection(void);
	result UseCustomNetConnection(void);

private:
	void OnManagedNetConnectionBearerChanged(Tizen::Net::ManagedNetConnection& managedNetConnection);
	void OnManagedNetConnectionResumed(Tizen::Net::ManagedNetConnection& managedNetConnection);
	void OnManagedNetConnectionStarted(Tizen::Net::ManagedNetConnection& managedNetConnection);
	void OnManagedNetConnectionStopped(Tizen::Net::ManagedNetConnection& managedNetConnection, Tizen::Net::NetConnectionStoppedReason reason);
	void OnManagedNetConnectionSuspended(Tizen::Net::ManagedNetConnection& managedNetConnection);

	void OnNetConnectionResumed(Tizen::Net::NetConnection& netConnection);
	void OnNetConnectionStarted(Tizen::Net::NetConnection& netConnection, result r);
	void OnNetConnectionStopped(Tizen::Net::NetConnection& netConnection, result r);
	void OnNetConnectionSuspended(Tizen::Net::NetConnection& netConnection);

private:
	Tizen::Net::NetConnectionManager* __pNetConnectionManager;
	Tizen::Net::ManagedNetConnection* __pDefaultNetConnection;
	Tizen::Net::NetAccountManager* __pNetAccountManager;
	Tizen::Net::NetConnection* __pCustomNetConnection;
};

#endif // _NETWORK_SAMPLE_H_
