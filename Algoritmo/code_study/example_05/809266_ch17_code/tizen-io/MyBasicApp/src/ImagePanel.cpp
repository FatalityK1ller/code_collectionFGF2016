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
#include <FMedia.h>

#include "ImagePanel.h"

using namespace Tizen::App;
using namespace Tizen::Base;
using namespace Tizen::Io;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Media;
using namespace Tizen::Graphics;

ImagePanel::ImagePanel(void)
	: __pTizenBitmap(null)
{
}

ImagePanel::~ImagePanel(void)
{
}

result
ImagePanel::Initialize(Tizen::Graphics::Rectangle rect)
{
	return Panel::Construct(rect);
}

result
ImagePanel::OnInitializing(void)
{
	Image image;
	result r = image.Construct();
	String filepath = App::GetInstance()->GetAppResourcePath() + L"screen-density-xhigh/tizen.png";

	__pTizenBitmap = image.DecodeN(filepath, BITMAP_PIXEL_FORMAT_ARGB8888);

	return r;
}

result
ImagePanel::OnTerminating(void)
{
	result r = E_SUCCESS;

	delete __pTizenBitmap;
	return r;
}

result
ImagePanel::OnDraw(void)
{
	result r = E_SUCCESS;

	Canvas* pCanvas = GetCanvasN();

	if (pCanvas != null && __pTizenBitmap != null)
	{
		Rectangle rect = GetBounds();

		float widthRatio = float(rect.width) / __pTizenBitmap->GetWidth();
		float heightRatio = float(rect.height) / __pTizenBitmap->GetHeight();
		float ratio = (widthRatio > heightRatio) ? heightRatio : widthRatio;

		int height = int(__pTizenBitmap->GetHeight() * ratio);
		int width = int(__pTizenBitmap->GetWidth() * ratio);

		r = pCanvas->DrawBitmap(Rectangle((rect.width - width) / 2, (rect.height - height) / 2, width, height), *__pTizenBitmap);
	}

	delete pCanvas;

	return r;
}

void 
ImagePanel::OnOrientationChanged(const Tizen::Ui::Control &source, Tizen::Ui::OrientationStatus orientationStatus)
{
	Form *pForm = static_cast<Form *>(GetParent());

	if (pForm != null)
	{
		Rectangle clientRect = pForm->GetClientAreaBounds();
		Rectangle rect(0, 0, clientRect.width, clientRect.height);

		SetBounds(rect);
	}
	Invalidate(true);
}
