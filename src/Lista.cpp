#include "Lista.h"

Lista::Lista():_primero(NULL), _ultimo(NULL)
{
    //ctor
}

Lista::~Lista()
{
    //dtor
}

void Lista::agregar(Item* item)
{
    if(!_primero)
    {
        _primero = _ultimo = item;
        return;
    }
    _ultimo -> _siguiente = item;
    _ultimo = item;
}
