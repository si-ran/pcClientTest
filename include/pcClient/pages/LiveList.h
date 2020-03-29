#pragma once

#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>

class LiveList : public Fl_Group {
public:
	LiveList(Fl_Window* window) : Fl_Group(0, 0, window->w(), window->h()) {
		//在这里初始化组件
		btn1 = new Fl_Button(10, 500, 80, 30, "exit");
		btn2 = new Fl_Button(870, 500, 80, 30, "next");
		box1 = new Fl_Box(10, 10, 940, 50, "LiveList page");
		btn1->callback((Fl_Callback*)switchPage1, window);
		btn2->callback((Fl_Callback*)switchPage2, window);
	}
private:
	static void switchPage1(Fl_Button* btn, Fl_Window*);
	static void switchPage2(Fl_Button* btn, Fl_Window*);
	Fl_Button* btn1;
	Fl_Button* btn2;
	Fl_Box* box1;
};

