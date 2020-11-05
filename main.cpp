#include <iostream>
#include "arreglo.h"

using namespace std;

int main (){

    Arreglo<string> arreglo;

    arreglo.insertar_final("Mauricio");
    arreglo.insertar_final("cree");
    arreglo.insertar_final("poder");
    arreglo.insertar_final("pasar");
    arreglo.insertar_final("progra");
    arreglo.insertar_final("bien");
    arreglo.mostrar();

    arreglo.insertar("no", 1);
    arreglo.mostrar();

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(4);
    arreglo.mostrar();

    return 0;

}