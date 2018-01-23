//
// Copyright (c) 2012 Samsung Electronics Co., Ltd.
//
// Licensed under the Flora License, Version 1.1 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://floralicense.org/license/
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include <FApp.h>
#include <FBase.h>

#include "AppResourceId.h"
#include "ButtonPanel.h"
#include "ImagePanel.h"
#include "MainForm.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Graphics;

MainForm::MainForm(void)
	: __pButtonOrientation(null)
	, __status(ORIENTATION_PORTRAIT)
	, __panelId(0)
{
	__pPanel[0] = null;
	__pPanel[1] = null;
	__pPanel[2] = null;
}

MainForm::~MainForm(void)
{
}

result
MainForm::Initialize(int panelId)
{
	result r = Form::Construct(IDF_MAINFORM);

	if (panelId >= 0 && panelId <= 2)
	{
		__panelId = panelId;
	}
	else
	{
		__panelId = 0;
	}

	return r;
}

result
MainForm::CreateImagePanel(void)
{
	ImagePanel* pImagePanel = new (std::nothrow) ImagePanel();
	result r = pImagePanel->Initialize(Rectangle(0, 0, GetClientAreaBounds().width, GetClientAreaBounds().height));
	AddOrientationEventListener(*pImagePanel);
	r = AddControl(pImagePanel);
	__pPanel[2] = pImagePanel;

	return r;
}

result
MainForm::OnInitializing(void)
{
	result r = E_SUCCESS;

	Rectangle clientRect = GetClientAreaBounds();
	Rectangle rect(0, 0, clientRect.width, clientRect.height);

	// Create header
	Header* pHeader = GetHeader();
	if (pHeader != null)
	{
		pHeader->SetStyle(HEADER_STYLE_TAB);

		HeaderItem headerItem1;
		headerItem1.Construct(ID_HEADER_ITEM1);
		headerItem1.SetText(L"Button");
		pHeader->AddItem(headerItem1);

		HeaderItem headerItem2;
		headerItem2.Construct(ID_HEADER_ITEM2);
		headerItem2.SetText(L"Orientation");
		pHeader->AddItem(headerItem2);

		HeaderItem headerItem3;
		headerItem3.Construct(ID_HEADER_ITEM3);
		headerItem3.SetText(L"Image");
		pHeader->AddItem(headerItem3);

		pHeader->AddActionEventListener(*this);
	}

	SetFormBackEventListener(this);

	// Create the Button panel
	ButtonPanel* pButtonPanel = new (std::nothrow) ButtonPanel();
	pButtonPanel->Initialize(rect);
	AddControl(pButtonPanel);
	__pPanel[0] = pButtonPanel;

	// Orientation panel was created with UI Builder,
	// so only its button events must be defined here
	__pPanel[1] = static_cast<Panel *>(GetControl(IDC_ORIENTATIONPANEL));
	if (__pPanel[1] != null)
	{
		__pButtonOrientation = static_cast<Button *>(GetControl(IDC_BUTTON_ORIENTATION, true));

		if (__pButtonOrientation != null)
		{
			__pButtonOrientation->SetActionId(ID_ORIENTATION);
			__pButtonOrientation->AddActionEventListener(*this);
		}
	}

	// Set the current panel as selected in the header and display it on the form
	if (pHeader)
	{
		pHeader->SetItemSelected(__panelId);

		if(__panelId == 2)
		{
			if (__pPanel[2] == null)
			{
				CreateImagePanel();
			}
			SetOrientation(ORIENTATION_AUTOMATIC);
		}

		if (__pPanel[0] != null)
		{
			__pPanel[0]->SetShowState(false);
		}
		if (__pPanel[1] != null)
		{
			__pPanel[1]->SetShowState(false);
		}

		__pPanel[__panelId]->SetShowState(true);
	}

	Invalidate(true);
	return r;
}

result
MainForm::OnTerminating(void)
{
	AppRegistry *appRegistry = Application::GetInstance()->GetAppRegistry();
	String panelIDkey(L"AppLastPanelId");
	String panelNamekey(L"AppLastPanelName");

	Header* pHeader = GetHeader();
	result r = appRegistry->Set(panelIDkey,pHeader->GetSelectedItemIndex());
	if (IsFailed(r))
	{
		//error condition
	}

	String panel;
	panel.Format(50, L"Panel%d", pHeader->GetSelectedItemIndex());
	r = appRegistry->Set(panelNamekey, panel);
	if (IsFailed(r))
	{
		//error condition
	}

	r = appRegistry->Save();
	if (IsFailed(r))
	{
		//failed to save data to registry.
	}

	return r;
}

void
MainForm::OnActionPerformed(const Tizen::Ui::Control& source, int actionId)
{
	switch(actionId)
	{
	case ID_HEADER_ITEM1:
		{
			if (__pPanel[0] != null)
			{
				__pPanel[0]->SetShowState(true);
			}
			if (__pPanel[1] != null)
			{
				__pPanel[1]->SetShowState(false);
			}
			if (__pPanel[2] != null)
			{
				__pPanel[2]->SetShowState(false);
			}
			SetOrientation(ORIENTATION_PORTRAIT);
		}
		break;

	case ID_HEADER_ITEM2:
		{
			if (__pPanel[0] != null)
			{
				__pPanel[0]->SetShowState(false);
			}
			if (__pPanel[1] != null)
			{
				__pPanel[1]->SetShowState(true);
			}
			if (__pPanel[2] != null)
			{
				__pPanel[2]->SetShowState(false);
			}
			SetOrientation(__status);
		}
		break;

	case ID_HEADER_ITEM3:
		{
			if (__pPanel[2] == null)
			{
				CreateImagePanel();
			}
			if (__pPanel[0] != null)
			{
				__pPanel[0]->SetShowState(false);
			}
			if (__pPanel[1] != null)
			{
				__pPanel[1]->SetShowState(false);
			}
			if (__pPanel[2] != null)
			{
				__pPanel[2]->SetShowState(true);
			}
			SetOrientation(ORIENTATION_AUTOMATIC);
		}
		break;

	case ID_ORIENTATION:
		{
			if (__pPanel[1]->GetShowState())
			{
				OrientationStatus status = GetOrientationStatus();
				if (status == ORIENTATION_STATUS_PORTRAIT)
				{
					__status = ORIENTATION_LANDSCAPE;
				}
				else if (status == ORIENTATION_STATUS_LANDSCAPE)
				{
					__status = ORIENTATION_PORTRAIT;
				}
				SetOrientation(__status);
			}
		}
		break;

	default:
		break;
	}

	Invalidate(true);
}

void
MainForm::OnFormBackRequested(Form& source)
{
	UiApp* pApp = UiApp::GetInstance();
	AppAssert(pApp);
	pApp->Terminate();
}
