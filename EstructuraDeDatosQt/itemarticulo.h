#ifndef ITEMARTICULO_H
#define ITEMARTICULO_H
#include <iostream>
#include <string>

class ItemArticulo
{
private:
    int codigo;
    std::string nombre;
    double precio;
    int cantidad;
public:
    ItemArticulo(); //constructor
    ~ItemArticulo();//destructor
    int getCodigo();
    void setCodigo(int);
    std::string getNombre();
    void setNombre(std::string);
    double getPrecio();
    void setPrecio(double);
    int getCantidad();
    void setCantidad(int);
};

#endif // ITEMARTICULO_H
