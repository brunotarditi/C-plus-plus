/*Dado un array de enteros, hacer una funcion que indique que rangos de numeros 
consecutivos dan como resultado la cantidad que se le pasa como parametro
*/
#include<iostream>
#include <conio.h>
using namespace std;

void sumar(int);

int main (int argc, char** argv){

sumar(13);
getch();
return 0;

}

void sumar(int num){
	
	int array [] = {6,7,5,4,3,1,2,3,5,6,7,9,0,0,1,2,4,1,2,3,5,1,2};
	int suma = 0;
	for(int i = 0; i < sizeof(array); i++){
		suma = array[i];		
		for (int j = i+1; j < sizeof(array); j++){
			suma += array[j];
			if(suma == num){
				cout << "Los elementos entre (" << i << "," << j << ") suman: " << suma << endl;
				break;						
			}
			
			if(suma > num){
				break;
			}
		}	
	}
}

