#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

namespace Ukelele {

    // Clase Abstracta (Requerimiento c y h)
    class Animal {
    protected:
        std::string nombre;

    public:
        Animal(std::string n);
        virtual ~Animal(); // Destructor virtual importante

        // Métodos Virtuales Puros (Requerimiento h)
        virtual void Comer() = 0;
        virtual void Dormir() = 0;

        std::string getNombre() const;
    };
}

#endif