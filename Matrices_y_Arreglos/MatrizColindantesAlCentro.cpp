#include <iostream>

/*
Cree un programa que permita ingresar por teclado un valor entero impar mayor o igual a 5 el cual indicara el 
número de filas y de columnas de un array. Valide que el valor ingresado sea un valor entero impar mayor o igual a 5,
caso contrario emita una excepción (mediante throw) que muestre el mensaje “El valor ingresado no es un numero entero 
impar mayor o igual a 5.” Cree un array de 2 dimensiones de orden filas X columnas.
Genere una matriz cuyas filas/columnas colindantes a la celda central tengan asignado un carácter X, el resto carácter 0.
Muestre por pantalla la matriz resultante.
*/
using namespace std;

int tamanio(){
	int n;
	cout << "Ingrese el tamaño para la matriz cuadrada. Debe ser impar y mayor o igual a 5" << endl;
	cin >> n;
	
	if(n < 5 || (n % 2 == 0)){		
		throw "Debe ser impar y mayor o igual a 5.";	
	}
	
	return n;
	
}

int main(int argc, char** argv){
	try{
		int t = tamanio();
		string matriz [t][t];
		
		for(int i = 0; i < t; i++){
			for(int j = 0; j < t; j++){
				if(i >= (t / 2)- 1 && i <= (t / 2)+ 1 && j >= (t / 2)- 1 && j <= (t / 2)+ 1){
					matriz[i][j] = "X";
				} else{
					matriz[i][j] = "O";
				}
				if(i == j && i + j == t){
					matriz[i][j] = "O";
				}
			}
		}
		cout << "La matriz resultante es "<< endl;
		for(int i = 0; i < t; i++){
			for(int j = 0; j < t; j++){
			cout <<	matriz[i][j] << " ";
			}
			cout << "" << endl;
		}
	
	}catch(char const* e){
		cout << e;
	}
	
	
	
	
	
}
