#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
/*Cree una funcion para la lectura del archivo creado anteriormente
*/
void lectura();
int main(int argc, char** argv){
	
	lectura();
	
  return 0;          
}

void lectura(){
	
	ifstream archivo;
	string datos;
	archivo.open("archivo.txt", ios::in);
	
	if(archivo.fail()){
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	
	while(getline(archivo, datos)){
		cout << datos << endl;;
	}	
	
	archivo.close();
}
