#include <iostream>
#include <thread>
#include <chrono> 
using namespace std;
 
void hiloEjecutado();
 
int main(int argc, char** argv){
    thread t(hiloEjecutado);
	t.join();
            
}

void hiloEjecutado(){
    while(true){
    	cout << "Hilo ejecutado cada 5 segundos" << endl;
		this_thread::sleep_for(chrono::seconds(5));
	}
}

