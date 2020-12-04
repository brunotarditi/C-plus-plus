#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
#include "itemarticulo.h"
using namespace std;

int main()
{
    vector <ItemArticulo> items;
    string articulos [10][3] = {{"100", "Gaseosa", "120"},
                                {"150", "Fideos", "50"} ,
                                {"200", "Arroz", "60"},
                                {"250", "Harina", "55"},
                                {"300", "Lavandina", "70"},
                                {"350", "Cafe", "200"},
                                {"400", "Azucar", "120"},
                                {"450", "Yerba", "80"},
                                {"500", "Te", "90"},
                                {"550", "Docena de Huevos", "160"}};
    int pos = 0;
    string codigo;
    char pregunta = 's';

    while((pregunta == 's') || (pregunta == 'S')){

        cout << "Ingrese el codigo del articulo" << endl;
        getline(cin, codigo);
        bool encontrado = false;
        for(int i = 0; i < 10; i++){
            for (int j = 0; j < 3; j++){
                if(codigo == articulos[i][0]){
                    encontrado = true;
                    pos = i;
                }
            }
        }
        if(encontrado){
            int cantidad;
            cout << "Ingrese la cantidad de articulos: " << endl;
            cin >> cantidad;
            ItemArticulo it = ItemArticulo();
            it.setCodigo(stoi(codigo)); //funcion para castear de string a int incluidas en c++11
            it.setNombre(articulos[pos][1]);
            it.setPrecio(stod(articulos[pos][2])); //funcion para castear de string a double incluidas en c++11
            it.setCantidad(cantidad);
            items.push_back(it);
        }else{
            cout << "El codigo ingresado no existe, vuelva a intentar." << endl;
        }
        cin.ignore();
        cout << "Desea cargar otro articulo? presione (s/n): " << endl;
        cin >> pregunta;
        cin.ignore();
    }
        cout << "Codigo\tArticulo\tPrecio\tCantidad\tSubtotal" << endl;
        double total = 0;
        for(ItemArticulo i : items){
            cout << i.getCodigo() << "";
            cout << "\t" << i.getNombre() << "\t";
            cout << "\t" << i.getPrecio();
            cout << "\t" << i.getCantidad();
            double subtotal = i.getCantidad() * i.getPrecio();
            cout << "\t\t" << subtotal;
            total += subtotal;
            cout << "" << endl;
        }

        cout << "\t\t\t\t\t\tTotal: " << total << endl;

    getch();
    return 0;
}
