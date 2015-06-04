#include <iostream>
#include "Diccionario.h"
#include <sstream>
using namespace std;


void generarValores(Diccionario* diccionario, int cantidad)
{
    stringstream flujoLlave;
    stringstream flujoValor;
    for(int i = 0 ; i < cantidad ; i++)
    {
        flujoLlave << "llave" << " " << i;
        flujoValor << "valor" << " " << i;
        diccionario -> agregar(new Item(flujoLlave.str(), flujoValor.str()));
        flujoLlave.clear();
        flujoLlave.str(std::string());
        flujoValor.clear();
        flujoValor.str(std::string());
    }
}


int main()
{
    Diccionario* diccionario = new Diccionario(23);
    //Insertando data de prueba
    diccionario -> agregar(new Item("Raydelto","Hernandez"));
    diccionario -> agregar(new Item("Juan","Lopez"));
    diccionario -> agregar(new Item("Celines","Vasquez"));
    diccionario -> agregar(new Item("Gato","Pascual"));
    generarValores(diccionario, 15);
    Item* item = diccionario -> obtener("Celines");
    cout << item ->getValor() << endl;
    cout << endl;
    diccionario->mostrarMapa();
    return 0;
}
