#include <iostream>
#include "Laptop.h"
#include "Keyboard.h"

using namespace std;

Laptop::Laptop(){
	
}

Laptop::Laptop(string ma, string mo, string st){
	
	manufacturer = ma;
	model = mo;
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

Keyboard Laptop::getKeyboard(){
	
	return keyboard;
}

void Laptop::setKeyboard(Keyboard ke){
	
	keyboard = ke;
}
