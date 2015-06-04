#ifndef LISTA_H
#define LISTA_H
#include "Item.h"

class Lista
{
public:
    Lista();
    virtual ~Lista();
    void agregar(Item* item);
    Item* getPrimero();
private:
    Item* _primero;
    Item* _ultimo;

    friend class Diccionario;

};

#endif // LISTA_H
