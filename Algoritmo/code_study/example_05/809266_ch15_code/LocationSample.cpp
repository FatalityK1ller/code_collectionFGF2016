#include <FSystem.h>
#include "LocationSample.h"

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Locations;
using namespace Tizen::System;

LocationSample::LocationSample()
	: __pLocationProvider(null), __pRegions(null)
{

}

LocationSample::~LocationSample()
{

}

void
LocationSample::CheckLocationSetting(void)
{
	bool gpsAvailable;
	bool wpsAvailable;
	
	//Check GPS and WPS features are supported
	result gpsResult = SystemInfo::GetValue(L"http://tizen.org/feature/location.gps", gpsAvailable);
	result wpsResult = SystemInfo::GetValue(L"http://tizen.org/feature/location.wps", wpsAvailable);
	if (!gpsAvailable)
	{
		AppLog("Your device doesn't support the GPS positioning");
	}
	if (!wpsAvailable)
	{
 		AppLog("Your device doesn't support the WPS positioning");
	}

	//Check GPS and WPS settings are enabled
	result gpsResult = SystemInfo::GetValue(L"http://tizen.org/setting/location.gps", gpsAvailable);
	result wpsResult = SystemInfo::GetValue(L"http://tizen.org/setting/location.wps", wpsAvailable);
	if (!gpsResult && !wpsResult)
	{
		AppLog("Your device doesn't support the location positioning");
	}
}

result
LocationSample::GetLastKnownLocation(void)
{
	result r = E_SUCCESS;

	Location location = LocationProvider::GetLastKnownLocation();
	r = GetLastResult();
	if(!IsFailed(r) && location.IsValid())
	{
		Coordinates coords = location.GetCoordinates();
		DateTime timeStamp = location.GetTimestamp();
		String locationMethod = location.GetExtraInfo(L"location_method");
	}
	return r;
}

result
LocationSample::GetCurrentLocation(void)
{
	result r = E_SUCCESS;

	LocationCriteria criteria;
	criteria.SetAccuracy(LOC_ACCURACY_TEN_METERS);
	Location location = LocationProvider::GetLocation(criteria);
	r = GetLastResult();

	if (!IsFailed(r) && location.IsValid())
	{
		Coordinates coords = location.GetCoordinates();
		DateTime timeStamp = location.GetTimestamp();
		String locationMethod = location.GetExtraInfo(L"location_method");
	}

	return r;
}

result
LocationSample::InitializeLocationProvider(void)
{
	result r = E_SUCCESS;

	if(__pLocationProvider == null)
	{
		LocationCriteria criteria;
		criteria.SetAccuracy(LOC_ACCURACY_FINEST);

		__pLocationProvider = new (std::nothrow)LocationProvider();
		r = __pLocationProvider->Construct(criteria, *this);
	}

	return r;
}

result
LocationSample::UpdateLocationByDistance(double distance)
{
	result r = E_SUCCESS;

	r = InitializeLocationProvider();
	r = __pLocationProvider->StartLocationUpdatesByDistance(distance);

	return r;
}

result
LocationSample::UpdateLocationByInterval(int interval)
{
	result r = E_SUCCESS;

	r = InitializeLocationProvider();
	r = __pLocationProvider->StartLocationUpdatesByInterval(interval);

	return r;
}

result
LocationSample::AddRegion(double longitude, double latitude, double radius, const String& regionName)
{
	result r = E_SUCCESS;

	r = InitializeLocationProvider();

	Coordinates interestedRegion;
	r = interestedRegion.Set(longitude, latitude, 0.0);
	double radious = radius;
	RegionId regionId = 0;

	r = __pLocationProvider->AddMonitoringRegion(interestedRegion, radious, regionId);
	AppLog("Exception(%s)", GetErrorMessage(r));

	if(!IsFailed(r))
	{
		__pRegions = new (std::nothrow) HashMap();
		r = __pRegions->Construct();
		r = __pRegions->Add(new Integer(regionId), new String(regionName));
	}

	return r;
}

String
LocationSample::CheckRegionName(RegionId regionId)
{
	String* pRegionName = null;
	IMapEnumerator* pMapEnum = __pRegions->GetMapEnumeratorN();
	while (pMapEnum->MoveNext() == E_SUCCESS)
	{
		Integer* pTempRegionId = static_cast<Integer*>(pMapEnum->GetKey());
		if (pTempRegionId->ToInt() == regionId)
		{
			pRegionName = static_cast<String*>(pMapEnum->GetValue());
			return *pRegionName;
		}
	}

	return null;
}

void
LocationSample::OnAccuracyChanged (Tizen::Locations::LocationAccuracy accuracy)
{
	//Check the accuracy
}

void
LocationSample::OnLocationUpdated (const Tizen::Locations::Location &location)
{
	//Check the updated location
	Coordinates coords = location.GetCoordinates();
}

void
LocationSample::OnLocationUpdateStatusChanged (Tizen::Locations::LocationServiceStatus status)
{
	result r = E_SUCCESS;

	switch (status)
	{
	case LOC_SVC_STATUS_RUNNING:
		break;
	case LOC_SVC_STATUS_PAUSED:
		r = __pLocationProvider->KeepLocationUpdateAwake(true);
		break;
	default:
		AppLog("Location Service Status is changed: %d", status);
		break;
	}
}

void
LocationSample::OnRegionEntered (Tizen::Locations::RegionId regionId)
{
	String regionName = CheckRegionName(regionId);
	AppLog("You're entered in %ls.", regionName.GetPointer());
}

void
LocationSample::OnRegionLeft (Tizen::Locations::RegionId regionId)
{
	String regionName = CheckRegionName(regionId);
	AppLog("You're left from %ls.", regionName.GetPointer());
}

void
LocationSample::OnRegionMonitoringStatusChanged (Tizen::Locations::LocationServiceStatus status)
{
	result r = E_SUCCESS;

	if (status != LOC_SVC_STATUS_RUNNING)
	{
		r = __pLocationProvider->RemoveAllMonitoringRegions();
	}
}


