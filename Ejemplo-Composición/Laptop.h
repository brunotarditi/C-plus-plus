#ifndef LAPTOP_H
#define LAPTOP_H
#include<iostream>
#include "Keyboard.h"

class Laptop{
	
	public:
		Laptop();
		Laptop(string, string, string);
		string getManufacturer();
		void setManufacturer(string manufacturer);
		string getModel();
		void setModel(string model);
		string getServiceTag();
		void setServiceTag(string serviceTag);
		Keyboard getKeyboard();
		void setKeyboard(Keyboard keyboard);
	
	private:
		string manufacturer;
		string model;
		string serviceTag;
		Keyboard keyboard = Keyboard();
		
};

#endif
