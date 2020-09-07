#include <iostream>
#include "Keyboard.h"

using namespace std;

Keyboard::Keyboard(){
	
}

Keyboard::Keyboard(string _color){
	color = _color;
}

string Keyboard::getColor(){
	return color;
}

void Keyboard::setColor(string c){
	color = c;
}
