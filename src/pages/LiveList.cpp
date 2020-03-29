#include <iostream>
#include "pcClient/pages/LiveList.h"
#include "pcClient/pages/LoginPage.h"
#include "pcClient/pages/LivePage.h"

void LiveList::switchPage1(Fl_Button* btn, Fl_Window* window) {
	window->clear();
	window->begin();
	Fl_Group* group = new LoginPage(window);
	window->end();
	window->redraw();
}

void LiveList::switchPage2(Fl_Button* btn, Fl_Window* window) {
	window->clear();
	window->begin();
	Fl_Group* group = new LivePage(window);
	window->end();
	window->redraw();
}