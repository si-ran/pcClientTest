//�������ƶ��¼���Ӧ����

#include <iostream>
#include "pcClient/pages/LiveList.h"
#include "pcClient/pages/LoginPage.h"
#include "pcClient/pages/LivePage.h"

void LivePage::switchPage(Fl_Button* btn, Fl_Window* window) {
	window->clear();
	window->begin();
	Fl_Group* group = new LiveList(window);
	window->end();
	window->redraw();
}