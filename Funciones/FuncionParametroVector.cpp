#include <iostream>
#include <conio.h>
using namespace std;

/*Paso de parametros de tipo vector
Crear 4 funciones para pedir la longitud del vector, llenar el vector, realizar el cuadrado de los elementos y mostrarlos*/

int tamanio();
void llenarVec(int vec[], int); 
void cuadrado(int vec[], int);
void mostrar(int vec[], int); 
int main(int argc, char** argv){
  
  int t = tamanio();
  int vec [t]; 
  llenarVec(vec, t);
  cuadrado(vec, t);
  mostrar(vec, t);

  return 0;          
}

int tamanio(){
	int t;
	cout << "Digite la longitud del vector: " << endl;
	cin >> t;
	return t;	
}

void llenarVec(int vec[], int tam){
	
	cout << "Digite los valores del vector: " << endl;
	for(int i = 0; i < tam; i++){
		cin >> vec[i];
	}
}

void cuadrado(int vec[], int tam){
	
	for(int i = 0; i < tam; i++){
		vec[i] *= vec[i];
	}
	
}

void mostrar(int vec[], int tam){
	cout << "El vector es: ";
	for(int i = 0; i < tam; i++){
		cout << vec[i] << " ";
	}
}


