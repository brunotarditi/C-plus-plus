#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
/*Cree una funcion para escribir un archivo txt incluyendo en un bucle 10 filas y 10 columna separandolas
con una tabulacon y un salto de linea cuando se complete la primera fila
*/
void escribir();
int main(int argc, char** argv){
	
	escribir();
	
  return 0;          
}

void escribir(){
	ofstream archivo;
	
	archivo.open("Archivo.txt", ios::out);
	
	if(archivo.fail()){
		cout << "No se pudo abrir el archivo";
		exit(1);
	}
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			archivo << "Fila " << i << " Columna " << j;
			archivo << "\t";
		}
		
		archivo << "\n";
	}
	
	
	archivo.close();
}



	

