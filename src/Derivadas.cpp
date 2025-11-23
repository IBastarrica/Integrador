#include "Derivadas.h"
#include <iostream>

namespace Ukelele {

    // --- Implementación Pollo ---
    Pollo::Pollo(std::string n) : Animal(n) {}

    void Pollo::Comer() {
        std::cout << "[POLLO] " << nombre << " esta picoteando maiz rapidamente." << std::endl;
    }
    void Pollo::Dormir() {
        std::cout << "[POLLO] " << nombre << " duerme en el gallinero." << std::endl;
    }

    // --- Implementación Vaca ---
    Vaca::Vaca(std::string n) : Animal(n) {}

    void Vaca::Comer() {
        std::cout << "[VACA] " << nombre << " esta pastando tranquilamente." << std::endl;
    }
    void Vaca::Dormir() {
        std::cout << "[VACA] " << nombre << " duerme de pie bajo un arbol." << std::endl;
    }
}