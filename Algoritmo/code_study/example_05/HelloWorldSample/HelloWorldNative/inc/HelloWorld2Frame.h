#ifndef _HELLO_WORLD_2_FRAME_H_
#define _HELLO_WORLD_2_FRAME_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>
#include <FUiIme.h>
#include <FGraphics.h>
#include <gl.h>

class HelloWorld2Frame
	: public Tizen::Ui::Controls::Frame
{
public:
	HelloWorld2Frame(void);
	virtual ~HelloWorld2Frame(void);

private:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
};

#endif	//_HELLO_WORLD_2FRAME_H_
