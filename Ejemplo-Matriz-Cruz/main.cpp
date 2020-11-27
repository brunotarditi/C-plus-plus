#include <iostream>
using namespace std;
/*
Cree un programa que permita ingresar por teclado un valor entero, mediante el valor entero cree una matriz de 2 
dimensiones de orden igual al valor entero.
Muestre por pantalla la matriz con 1 en la columna y fila central y el resto 0.
*/

int main(int argc, char** argv) {
	
	int tamanio;
	cout << "Elija un número impar para la matriz: "<<endl;
	cin >> tamanio;
	while(tamanio % 2 == 0){
		cout << "Debe ser impar: " << endl;
		cin >> tamanio;
	}
	
	int matriz [tamanio][tamanio];
	int filMitad = tamanio / 2; 
	int colMitad = tamanio / 2;
	for(int i = 0; i < tamanio; i++){
		for(int j = 0; j < tamanio; j++){
			if(i == filMitad || j == colMitad){
				matriz[i][j] = 1;
			}else{
				matriz[i][j] = 0;
			}
		}
	}
	
	//Mostrar Matriz
	for(int i = 0; i < tamanio; i++){
		for(int j = 0; j < tamanio; j++){
			cout << matriz[i][j] << " ";
		}
		
		cout << "" << endl;
	}
	return 0;
}
