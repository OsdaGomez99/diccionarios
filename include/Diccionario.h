#ifndef DICCIONARIO_H
#define DICCIONARIO_H
#include <string>
#include "Lista.h"


class Diccionario
{
public:
    Diccionario();
    Diccionario(int tamano);
    virtual ~Diccionario();
    void agregar(Item* item);
    Item* obtener(std::string llave);
    void mostrarMapa();
private:
    Lista* _cubetas;
    int _tamano;
    int codificar(std::string llave);

};

#endif // DICCIONARIO_H
