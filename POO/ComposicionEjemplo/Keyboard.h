#ifndef KEYBOARD_H
#define KEYBOARD_H
#include <iostream>
using namespace std;
class Keyboard
{
	public:
		Keyboard();
		Keyboard(string);		
		string getColor();
		void setColor(string);
	private:
		string color;
};

#endif
