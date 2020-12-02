#ifndef LAPTOP_H
#define LAPTOP_H
#include "Keyboard.h"
#include <iostream>
using namespace std;
class Laptop
{
	public:
		Laptop();
		Laptop(string, string, string);
		string getManufacturer();
		void setManufacturer(string manufacturer);
		string getModel();
		void setModel(string model);
		string getServiceTag();
		void setServiceTag(string serviceTag);
		Keyboard& getKeyboard();
		void setKeyboard(Keyboard keyboard);
	private:
		string manufacturer;
		string model;
		string serviceTag;
		Keyboard keyboard = Keyboard();
		
};

#endif
