#include "Diccionario.h"
#include <iostream>
using namespace std;

Diccionario::~Diccionario()
{
    //dtor
}

Diccionario::Diccionario()
{
    _tamano = 13;
    _cubetas = new Lista[13];

}


Diccionario::Diccionario(int tamano)
{
    _tamano = tamano;
    _cubetas = new Lista[_tamano];
}

void Diccionario::agregar(Item* item)
{
    _cubetas[codificar(item->getLlave())].agregar(item);
}

Item* Diccionario::obtener(std::string llave)
{
    Lista lista = _cubetas[codificar(llave)];
    Item* i = lista._primero;
    while(i != NULL)
    {
        if(i -> _llave == llave)
        {
            return i;
        }
        i = i -> _siguiente;
    }
    return NULL;
}

int Diccionario::codificar(std::string llave)
{
    int codigo = 0;
    for(int i = 0 ; i < llave.size() ; i++)
    {
        codigo += llave[i];
    }
    int index = (codigo * llave.size()) % _tamano;
//    cout << "codificar:" << index << endl;
    return index;
}

void Diccionario::mostrarMapa()
{
    Lista lista;
    for(int i = 0 ; i < _tamano ; i++)
    {
        cout << "[" << i << "] ->";
        lista = _cubetas[i];
        Item* item = lista._primero;
        while(item != NULL)
        {
            cout << "\t" << item -> _llave;
            item = item -> _siguiente;
        }
        cout << endl;

    }
}
