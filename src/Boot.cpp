#include <iostream>
#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include"pcClient/pages/LoginPage.h"

int main(){
	Fl_Window* window = new Fl_Window(960, 540);
	Fl_Group* btn1 = new LoginPage(window);
	window->end();
	window->show();
	return Fl::run();
}