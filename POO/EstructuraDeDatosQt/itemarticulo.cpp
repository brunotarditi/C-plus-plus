#include "itemarticulo.h"

ItemArticulo::ItemArticulo()
{

}
ItemArticulo::~ItemArticulo(){

}
int ItemArticulo::getCodigo(){
    return this->codigo;
}

void ItemArticulo::setCodigo(int codigo){
    this->codigo = codigo;
}

std::string ItemArticulo::getNombre(){
    return this->nombre;
}

void ItemArticulo::setNombre(std::string nombre){
    this->nombre = nombre;
}

double ItemArticulo::getPrecio(){
    return this->precio;
}

void ItemArticulo::setPrecio(double precio){
    this->precio = precio;
}

int ItemArticulo::getCantidad(){
    return this->cantidad;
}

void ItemArticulo::setCantidad(int cantidad){
    this->cantidad = cantidad;
}

