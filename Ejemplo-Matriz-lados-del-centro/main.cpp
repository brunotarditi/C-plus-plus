#include <iostream>

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
