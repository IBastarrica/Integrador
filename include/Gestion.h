#ifndef GESTION_H
#define GESTION_H

#include "Animal.h"
#include "Entidades.h"

namespace Ukelele {

    class Gestion {
    private:
        // Requerimiento g y j: Arrays y Punteros a Base
        Animal* listaProductos[5]; 
        Cliente listaClientes[3];
        Pedido listaPedidos[2];

        int cantProductos;
        int cantClientes;
        int cantPedidos;

    public:
        Gestion();
        ~Gestion();
        void ejecutarMenu();

    private:
        void cargarProducto();
        void cargarCliente();
        void mostrarPolimorfismo(); // Requerimiento k
    };
}

#endif