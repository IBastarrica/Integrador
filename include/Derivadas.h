#ifndef DERIVADAS_H
#define DERIVADAS_H

#include "Animal.h"

namespace Ukelele {

    class Pollo : public Animal {
    public:
        Pollo(std::string n);
        void Comer() override;
        void Dormir() override;
    };

    class Vaca : public Animal {
    public:
        Vaca(std::string n);
        void Comer() override;
        void Dormir() override;
    };
}

#endif