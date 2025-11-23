#include "Gestion.h"
#include "Derivadas.h"
#include <iostream>

namespace Ukelele {

    Gestion::Gestion() {
        cantProductos = 0;
        cantClientes = 0;
        cantPedidos = 0;
        // Inicializar punteros en null
        for(int i=0; i<5; i++) listaProductos[i] = nullptr;
    }

    Gestion::~Gestion() {
        // Liberar memoria dinámica
        for(int i=0; i<cantProductos; i++) {
            delete listaProductos[i];
        }
    }

    void Gestion::ejecutarMenu() {
        int opc;
        do {
            std::cout << "\n--- UKELELE CHICKEN BOUTIQUE ---\n";
            std::cout << "1. Cargar Producto (Animal)\n";
            std::cout << "2. Cargar Cliente\n";
            std::cout << "3. Mostrar Acciones (Polimorfismo)\n";
            std::cout << "0. Salir\n";
            std::cout << "Opcion: ";
            std::cin >> opc;

            switch(opc) {
                case 1: cargarProducto(); break;
                case 2: cargarCliente(); break;
                case 3: mostrarPolimorfismo(); break;
            }
        } while(opc != 0);
    }

    void Gestion::cargarProducto() {
        if(cantProductos >= 5) {
            std::cout << "Error: Stock lleno (Max 5).\n";
            return;
        }

        std::string nombre;
        int tipo;
        std::cout << "Ingrese nombre del animal: ";
        std::cin >> nombre;

        // Requerimiento f: Elegir tipo en tiempo de ejecucion
        std::cout << "Seleccione Tipo: 1-Pollo, 2-Vaca: ";
        std::cin >> tipo;

        // Requerimiento j: Puntero base apuntando a derivada
        if(tipo == 1) {
            listaProductos[cantProductos] = new Pollo(nombre);
        } else {
            listaProductos[cantProductos] = new Vaca(nombre);
        }
        cantProductos++;
        std::cout << "Producto cargado exitosamente.\n";
    }

    void Gestion::cargarCliente() {
        if(cantClientes >= 3) {
            std::cout << "Agenda llena (Max 3).\n";
            return;
        }
        std::string rs;
        std::cout << "Razon Social: ";
        std::cin >> rs;
        listaClientes[cantClientes] = Cliente(rs);
        cantClientes++;
    }

    void Gestion::mostrarPolimorfismo() {
        std::cout << "\n--- CICLO DE VIDA DE LOS ANIMALES ---\n";
        // Requerimiento k: Recorrer array ejecutando metodos virtuales
        for(int i=0; i < cantProductos; i++) {
            // Llamada generica, el programa decide cual ejecutar en tiempo real
            std::cout << "Animal " << (i+1) << ": "; 
            listaProductos[i]->Comer();
            listaProductos[i]->Dormir();
        }
    }
}