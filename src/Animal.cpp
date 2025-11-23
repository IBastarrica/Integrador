#include "Animal.h"

namespace Ukelele {
    Animal::Animal(std::string n) : nombre(n) {}
    
    Animal::~Animal() {}

    std::string Animal::getNombre() const {
        return nombre;
    }
}