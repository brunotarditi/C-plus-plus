#include <iostream>
#include <string>
#include "Laptop.h"
int main(int argc, char** argv) {
	Laptop l = Laptop();
	l.setManufacturer("Acer");
	l.setModel("Aspire 15");
	l.getKeyboard().setColor("Rojo");
	
	cout << "Marca: " << l.getManufacturer() << "\nModelo: " << l.getModel()<<endl;
	cout << "Color: " << l.getKeyboard().getColor() << endl;
	return 0;
}
