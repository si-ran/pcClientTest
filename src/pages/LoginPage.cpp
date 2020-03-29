//在这里制定事件响应函数

#include <iostream>
#include "pcClient/pages/LiveList.h"
#include "pcClient/pages/LoginPage.h"
#include "pcClient/pages/LivePage.h"

void LoginPage::switchPage(Fl_Button* btn, Fl_Window* window) {
	window->clear();
	window->begin();
	Fl_Group* group = new LiveList(window);
	window->end();
	window->redraw();
}