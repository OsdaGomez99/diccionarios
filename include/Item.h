#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item
{
public:
    Item(std::string llave, std::string valor);
    virtual ~Item();
    std::string getLlave();
    std::string getValor();
private:
    std::string _valor;
    std::string _llave;
    Item* _siguiente;
    friend class Lista;
    friend class Diccionario;
};

#endif // ITEM_H
