#include "EmailSample.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::Messaging;

EmailSample::EmailSample()
: __pEmailManager(null)
{

}

EmailSample::~EmailSample()
{
	if(__pEmailManager)
	{
		delete __pEmailManager;
	}
}

result
EmailSample::SendEmail(void)
{
	result r = E_SUCCESS;

	__pEmailManager = new (std::nothrow) EmailManager();
	__pEmailManager->Construct(*this);

	EmailMessage emailMessage;
	r = emailMessage.SetSubject(L"Email Subject!!!");
	r = emailMessage.SetText(L"Hello, refer to the attached file.");
	r = emailMessage.AddAttachment(L"res/file.dat");

	RecipientList recipient;
	r = recipient.Add (RECIPIENT_TYPE_TO, L"recipient1@company.org");
	r = recipient.Add (RECIPIENT_TYPE_CC, L"recipient2@company.org");
	r = recipient.Add (RECIPIENT_TYPE_BCC, L"recipient3@company.org");

	r = __pEmailManager->Send(emailMessage, recipient, true);

	return r;
}

void
EmailSample::UseEmailAppControl(void)
{
	HashMap extraData;
	extraData.Construct();
	String subjectKey = L"http://tizen.org/appcontrol/data/subject";
	String subjectVal = L"Email Subject!!!";
	String textKey = L"http://tizen.org/appcontrol/data/text";
	String textVal = L"Hello, refer to the attached file.";
	String toKey = L"http://tizen.org/appcontrol/data/to";
	String toVal = L"recipient1@company.com";
	String ccKey = L"http://tizen.org/appcontrol/data/cc";
	String ccVal = L"recipient2@company.com";
	String bccKey = L"http://tizen.org/appcontrol/data/bcc";
	String bccVal = L"recipient3@company.com";
	String attachKey = L"http://tizen.org/appcontrol/data/path";
	String attachVal = App::GetInstance()->GetAppRootPath() + L"res/image.jpg";
	ArrayList attachList;
	attachList.Construct();
	attachList.Add(attachVal);
	extraData.Add(&subjectKey, &subjectVal);
	extraData.Add(&textKey, &textVal);
	extraData.Add(&toKey, &toVal);
	extraData.Add(&ccKey, &ccVal);
	extraData.Add(&bccKey, &bccVal);
	extraData.Add(&attachKey, &attachList);

	AppControl* pAc = AppManager::FindAppControlN(L"tizen.email",
			L"http://tizen.org/appcontrol/operation/compose");
	if (pAc)
	{
		pAc->Start(null, null, &extraData, null);
		delete pAc;
	}
}

void
EmailSample::OnEmailMessageSent(result r)
{
	AppLog("result(%s)", GetErrorMessage(r));
}

void
EmailSample::OnAppControlCompleteResponseReceived(const AppId& appId,
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
