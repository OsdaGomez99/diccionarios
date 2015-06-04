#include "Item.h"


Item::~Item()
{
    //dtor
}

Item::Item(std::string llave, std::string valor) : _llave(llave) , _valor(valor) , _siguiente(NULL)
{

}

std::string Item::getLlave()
{
    return _llave;
}

std::string Item::getValor()
{
    return _valor;
}
