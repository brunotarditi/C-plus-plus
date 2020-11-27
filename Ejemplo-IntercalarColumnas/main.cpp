#include <iostream>
using namespace std;
/*
Cree programa que permita cargar 1 VALOR, num�rico impar mayor o igual a 3.Valide que el n�mero sea impar
Genere una matriz sim�trica bidimensional [][] de orden NxN donde N sea igual a VALOR cargado e imprima en 
columna central el n�mero 1, e intercale a partir de la columna central columnas con el n�mero 0 y columnas con 1. 
*/

int main(int argc, char** argv) {
	
	int valor;
	cout << "Elija un n�mero impar y mayor o igual a 3 para la matriz: "<<endl;
	cin >> valor;
	while(valor % 2 == 0 && valor < 3){
		cout << "Debe ser impar y mayor o igual a 3: " << endl;
		cin >> valor;
	}
	
	int matriz [valor][valor];
	int centro = valor / 2;
	for(int i = 0; i < valor; i++){
		for(int j = 0; j < valor; j++){
			if(centro % 2 == 0){
				if((j == centro) || ((j < centro || j > centro) && j % 2 == 0)){
				matriz[i][j] = 1;
				}else{
				matriz[i][j] = 0;
				}
			}else{
				if((j == centro) || ((j < centro || j > centro) && j % 2 != 0)){
					matriz[i][j] = 1;
				}else{
					matriz[i][j] = 0;
				}
			}
		}
	}
	
	//Mostrar Matriz
	cout << "La matriz resultante es: " << endl;
	for(int i = 0; i < valor; i++){
		for(int j = 0; j < valor; j++){
			cout << matriz[i][j] << " ";
		}
		
		cout << "" << endl;
	}
	return 0;
}
