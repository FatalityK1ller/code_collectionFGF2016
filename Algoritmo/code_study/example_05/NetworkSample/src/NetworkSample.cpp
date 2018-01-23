#include "NetworkSample.h"

using namespace Tizen::Net;

NetworkSample::NetworkSample()
: __pNetConnectionManager(null), __pDefaultNetConnection(null), __pNetAccountManager(null), __pCustomNetConnection(null)
{

}

NetworkSample::~NetworkSample()
{

}

result
NetworkSample::Initialize(void)
{
	result r = E_SUCCESS;

	if(__pNetConnectionManager == null)
	{
		__pNetConnectionManager = new (std::nothrow) NetConnectionManager();
		r = __pNetConnectionManager->Construct();
	}

	return r;
}

result
NetworkSample::SetNetworkPreference(void)
{
	result r = E_SUCCESS;

	Initialize();
	r = __pNetConnectionManager->SetNetPreference(NET_WIFI_FIRST);

	return r;
}

result
NetworkSample::UseDefaultNetConnection(void)
{
	result r = E_SUCCESS;

	__pDefaultNetConnection = __pNetConnectionManager->GetManagedNetConnectionN();
	r = __pDefaultNetConnection->SetManagedNetConnectionEventListener(this);

	return r;
}

result
NetworkSample::UseCustomNetConnection(void)
{
	result r = E_SUCCESS;

	__pNetAccountManager = new (std::nothrow) NetAccountManager();
	r = __pNetAccountManager->Construct();

	NetAccountInfo* pNetAccountInfo = new (std::nothrow) NetAccountInfo();
	r = pNetAccountInfo->Construct();
	// Set the network account info
	__pNetAccountManager->CreateNetAccount(*pNetAccountInfo);
	delete pNetAccountInfo;
	NetAccountId accountId = __pNetAccountManager->GetNetAccountId(NET_BEARER_PS);

	__pCustomNetConnection = new (std::nothrow) NetConnection();
	r = __pCustomNetConnection->Construct(accountId);

	r = __pCustomNetConnection->AddNetConnectionListener(*this);
	r = __pCustomNetConnection->Start();

	return r;
}

void
NetworkSample::OnManagedNetConnectionBearerChanged(ManagedNetConnection& managedNetConnection)
{
	NetBearerType bearerType = managedNetConnection.GetNetConnectionInfo()->GetBearerType();
	// Handle the  default network connection
}

void
NetworkSample::OnManagedNetConnectionResumed(ManagedNetConnection& managedNetConnection)
{
	// Handle the  default network connection
}

void
NetworkSample::OnManagedNetConnectionStarted(ManagedNetConnection& managedNetConnection)
{
	// Handle the  default network connection
}

void
NetworkSample::OnManagedNetConnectionStopped(ManagedNetConnection& managedNetConnection, NetConnectionStoppedReason reason)
{
	NetConnectionState state = managedNetConnection.GetConnectionState();
	// Handle the default network connection

	switch(reason)
	{
	case NET_CONNECTION_STOPPED_REASON_RESOURCE_RELEASED:
		// Handle the reason
		return;
	case NET_CONNECTION_STOPPED_REASON_NETWORK_FAILED:
		// Handle the reason
		return;
	// For other cases
	default:
		return;
	}
}

void
NetworkSample::OnManagedNetConnectionSuspended(ManagedNetConnection& managedNetConnection)
{
	// Handle the custom network connection
}

void
NetworkSample::OnNetConnectionResumed(NetConnection& netConnection)
{
	// Handle the custom network connection
}

void
NetworkSample::OnNetConnectionStarted(NetConnection& netConnection, result r)
{
	// Handle the custom network connection
}

void
NetworkSample::OnNetConnectionStopped(NetConnection& netConnection, result r)
{
	// Handle the custom network connection
}

void
NetworkSample::OnNetConnectionSuspended(NetConnection& netConnection)
{

}




