#include <iostream>
#include <conio.h>
//Realice una función recursiva que sume los primeros n enteros positivos.
using namespace std;

int sumar(int);

int main(int argc, char** argv){

	int n;
	
	do{
		cout << "Digite el numero de elementos: " << endl;
		cin >> n;
	}while(n <= 0);
	
	cout << "\nLa suma es: " << sumar(n) << endl;

  return 0;          
}

int sumar(int n){
	int suma = 0;
	if(n == 1){
		suma = 1;
	}else{
		suma = n + sumar(n-1);
	}
	
	return suma;
}






