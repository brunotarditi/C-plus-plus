#include<iostream>
using namespace std;

/*
Genere 4 variables, 1 de ellas para el tamaño de la matriz (1) y asigne 
en las celda seleccionada indicada por la fila (2) y la columna (3) ingresada el valor ingresado (4). 
Cargue en las posiciones colindantes a la celda seleccionada el valor ingresado incrementando en 1 el valor, 
comenzando si es posible siempre desde la celda de la derecha a la seleccionada.
*/

int main (int argc, char** argv){
	
	int longitud, fila, columna, valor;
	cout << "Indique la longitud de la matriz: " << endl;
	cin >> longitud;
	
	while(longitud % 2 == 0 || longitud < 5){
		cout << "Debe ser impar y mayor o igual a 5. Intente de nuevo." << endl;
		cin >> longitud;
	}
	
	cout << "Seleccione la fila: " << endl;
	cin >> fila;
	
	cout << "Seleccione la columna: " << endl;
	cin>> columna;
	
	cout << "Indique el valor: " << endl;
	cin >> valor;
	
	while(fila > longitud || columna > longitud){
	cout << "Seleccione la fila: " << endl;
	cin >> fila;
	
	cout << "Seleccione la columna: " << endl;
	cin>> columna;
	
	cout << "Indique el valor: " << endl;
	cin >> valor;
	}
	
	int matriz [longitud][longitud];
	
	for(int i = 0; i < longitud; i++){
		for(int j = 0; j < longitud; j++){
			matriz[i][j] = 0;
		}
	}
	
	if(fila == 0 && columna == 0){
		matriz[fila][columna] = valor;
		valor++;
		matriz[fila][columna + 1] = valor;
		valor++;
		matriz[fila + 1][columna + 1] = valor;
		valor++;
		matriz[fila + 1][columna] = valor;
	}
	
	if(fila < longitud - 1 && columna < longitud - 1 && fila > 1 && columna > 1){
		matriz[fila][columna] = valor;
		valor++;
		matriz[fila][columna + 1] = valor;
		valor++;
		matriz[fila + 1][columna + 1] = valor;
		valor++;
		matriz[fila + 1][columna] = valor;
		valor++;
		matriz[fila + 1][columna - 1] = valor;
		valor++;
		matriz[fila][columna - 1] = valor;
		valor++;
		matriz[fila - 1][columna - 1] = valor;
		valor++;
		matriz[fila - 1][columna] = valor;
		valor++;
		matriz[fila - 1][columna + 1] = valor;
	}
	
	if(fila == longitud - 1 && columna == longitud - 1){
		matriz[fila][columna] = valor;
		valor++;
		matriz[fila][columna - 1] = valor;
		valor++;
		matriz[fila - 1][columna - 1] = valor;
		valor++;
		matriz[fila - 1][columna] = valor;
		valor++;
	}
	
	if(fila == longitud && columna == longitud){
		valor = valor + 6;
		matriz[fila - 1][columna - 1] = valor;
	}
	
	cout << "La matriz resultante es: " << endl;
	for(int i = 0; i < longitud; i++){
		for(int j = 0; j < longitud; j++){
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}	

return 0;

}

