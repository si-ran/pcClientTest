#pragma once

#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>

class LivePage : public Fl_Group {
public:
	LivePage(Fl_Window* window) : Fl_Group(0, 0, window->w(), window->h()) {
		//�������ʼ�����
		btn1 = new Fl_Button(10, 500, 80, 30, "exit");
		box1 = new Fl_Box(10, 10, 940, 50, "LiveMain page");
		btn1->callback((Fl_Callback*)switchPage, window);
	}
private:
	static void switchPage(Fl_Button* btn, Fl_Window*);
	Fl_Button* btn1;
	Fl_Box* box1;
};

