#include <iostream>
using namespace std;
/*
Cree un programa que permita cargar un valor numérico impar mayor o igual a 3.
Genere una matriz simétrica bidimensional [][] de orden NxN donde N sea igual a VALOR cargado e imprima en la fila y columna
central un Círculo O, en las celdas circundantes al centro imprima X. Finalmente muestre la matriz
*/
int main(int argc, char** argv) {
	
	int valor;
	cout << "Elija un número impar mayor o igual a 3 para la matriz: "<<endl;
	cin >> valor;
	while(valor % 2 == 0 && valor < 3){
		cout << "Debe ser impar y mayor o igual a 3: " << endl;
		cin >> valor;
	}
	
	string matriz [valor][valor]; 
	
	for(int i = 0; i < valor; i++){
		for(int j = 0; j < valor; j++){
			if(i == j && i+j == valor-1){
				matriz[i][j] = "O";
			}else{
				matriz[i][j] = "X";
			}
		}
	}
	
	//Mostrar Matriz
	for(int i = 0; i < valor; i++){
		for(int j = 0; j < valor; j++){
			cout << matriz[i][j] << " ";
		}
		
		cout << "" << endl;
	}
	return 0;
}
