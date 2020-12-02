#include "Keyboard.h"
#include <iostream>
using namespace std;
Keyboard::Keyboard()
{
}

Keyboard::Keyboard(string c){
	color = c;
}

string Keyboard::getColor(){
	return color;
}

void Keyboard::setColor(string c){
	color = c;
}
