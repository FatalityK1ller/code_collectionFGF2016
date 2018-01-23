#include "MessageSample.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;

MessageSample::MessageSample()
{

}

MessageSample::~MessageSample()
{

}

void
MessageSample::UseMessageAppControl(void)
{
	HashMap extraData;
	extraData.Construct();
	String typeKey = L"http://tizen.org/appcontrol/data/messagetype";
	String typeVal = L"sms";
	String textKey = L"http://tizen.org/appcontrol/data/text";
	String textVal = L"Hi, Tizen!";
	String toKey = L"http://tizen.org/appcontrol/data/to";
	String toVal = L"12345678901,12345678902,12345678903";
	extraData.Add(&typeKey, &typeVal);
	extraData.Add(&textKey, &textVal);
	extraData.Add(&toKey, &toVal);

	Tizen::App::AppControl* pAc = AppManager::FindAppControlN(L"tizen.messages",
			 L"http://tizen.org/appcontrol/operation/compose");

	if (pAc)
	{
		pAc->Start(null, null, &extraData, null);
		delete pAc;
	}
}

void
MessageSample::OnAppControlCompleteResponseReceived(const Tizen::App::AppId& appId,
                                                 const String& operationId,
                                                 AppCtrlResult appControlResult,
                                                 const IMap* pExtraData)
{
   if ((appId == L"tizen.message") && (operationId == L"http://tizen.org/appcontrol/operation/compose"))
   {
      if (appControlResult == APP_CTRL_RESULT_SUCCEEDED)
      {
    	  //Do something
    	  return;
      }
   }
}
