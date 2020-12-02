#include "Laptop.h"
#include "Keyboard.h"
#include <iostream>
Laptop::Laptop()
{
}
Laptop::Laptop(string m, string md, string st){
	
	manufacturer = m;
	model = md;
	serviceTag = st;
		
}

string Laptop::getManufacturer(){
	return manufacturer;
}

void Laptop::setManufacturer(string m){
	manufacturer = m;
}

string Laptop::getModel(){
	
	return model;
}

void Laptop::setModel(string m){
	
	model = m;
}

string Laptop::getServiceTag(){
	
	return serviceTag;
}

void Laptop::setServiceTag(string s){
	
	serviceTag = s;
}

Keyboard& Laptop::getKeyboard(){
	
	return keyboard;
}

void Laptop::setKeyboard(Keyboard k){
	keyboard = k;
}
