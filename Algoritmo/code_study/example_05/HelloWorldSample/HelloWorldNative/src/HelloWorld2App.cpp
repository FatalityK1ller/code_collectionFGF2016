#include <new>
#include "HelloWorld2App.h"
#include "HelloWorld2Frame.h"

using namespace Tizen::App;
using namespace Tizen::System;

HelloWorld2App::HelloWorld2App(void)
{
}

HelloWorld2App::~HelloWorld2App(void)
{
}

UiApp*
HelloWorld2App::CreateInstance(void)
{
	// TODO: Create the application instance through the constructor.
	return new (std::nothrow) HelloWorld2App();
}

bool
HelloWorld2App::OnAppInitializing(AppRegistry& appRegistry)
{
	// TODO: Initialize application-specific data.
	// The permanent data and context of the application can be obtained from the application registry (appRegistry).
	//
	// If this method is successful, return true; otherwise, return false and the application is terminated.


	// Uncomment the following statement to listen to the screen on and off events:
	// PowerManager::SetScreenEventListener(*this);

	return true;
}

bool
HelloWorld2App::OnAppInitialized(void)
{
	// TODO: Create the application frame.

	HelloWorld2Frame* pHelloWorld2Frame = new (std::nothrow) HelloWorld2Frame;
	TryReturn(pHelloWorld2Frame != null, false, "The memory is insufficient.");
	pHelloWorld2Frame->Construct();
	pHelloWorld2Frame->SetName(L"HelloWorld2");
	AddFrame(*pHelloWorld2Frame);

	return true;
}

bool
HelloWorld2App::OnAppWillTerminate(void)
{
	// TODO: Deallocate or release resources in devices that have the END key.
	return true;
}

bool
HelloWorld2App::OnAppTerminating(AppRegistry& appRegistry, bool forcedTermination)
{
	// TODO: Deallocate all resources allocated by the application.
	// The permanent data and context of the application can be saved through the application registry (appRegistry).
	return true;
}

void
HelloWorld2App::OnForeground(void)
{
	// TODO: Start or resume drawing when the application is moved to the foreground.
}

void
HelloWorld2App::OnBackground(void)
{
	// TODO: Stop drawing when the application is moved to the background to save the CPU and battery consumption.
}

void
HelloWorld2App::OnLowMemory(void)
{
	// TODO: Free unnecessary resources or close the application.
}

void
HelloWorld2App::OnBatteryLevelChanged(BatteryLevel batteryLevel)
{
	// TODO: Handle all battery level changes here.
	// Stop using multimedia features (such as camera and mp3 playback) if the battery level is CRITICAL.
}

void
HelloWorld2App::OnScreenOn(void)
{
	// TODO: Retrieve the released resources or resume the operations that were paused or stopped in the OnScreenOff() event handler.
}

void
HelloWorld2App::OnScreenOff(void)
{
	// TODO: Release resources (such as 3D, media, and sensors) to allow the device to enter the sleep mode 
	// to save the battery (unless you have a good reason to do otherwise).
	// Only perform quick operations in this event handler. Any lengthy operations can be risky; 
	// for example, invoking a long asynchronous method within this event handler can cause problems
	// because the device can enter the sleep mode before the callback is invoked.

}
