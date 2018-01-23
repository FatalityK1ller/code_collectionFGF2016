#include <new>
#include "HelloWorld2Frame.h"
#include "HelloWorld2Form.h"

using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;

HelloWorld2Frame::HelloWorld2Frame(void)
{
}

HelloWorld2Frame::~HelloWorld2Frame(void)
{
}

result
HelloWorld2Frame::OnInitializing(void)
{
	result r = E_SUCCESS;

	// Create a form
	HelloWorld2Form* pHelloWorld2Form = new (std::nothrow) HelloWorld2Form();
	TryReturn(pHelloWorld2Form != null, false, "The memory is insufficient.");
	pHelloWorld2Form->Initialize();

	// Add the form to the frame
	AddControl(pHelloWorld2Form);

	// Set the current form
	SetCurrentForm(pHelloWorld2Form);

	// Draw the form
	pHelloWorld2Form->Invalidate(true);

	// TODO: Add your frame initialization code here.

	return r;
}

result
HelloWorld2Frame::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO: Add your frame termination code here.
	return r;
}


