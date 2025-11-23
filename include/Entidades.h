#ifndef ENTIDADES_H
#define ENTIDADES_H
#include <string>

namespace Ukelele {
    class Cliente {
    private:
        std::string razonSocial;
    public:
        Cliente(std::string rs = "Consumidor Final") : razonSocial(rs) {}
        std::string getRazon() const { return razonSocial; }
    };

    class Pedido {
    private:
        int idPedido;
        float monto;
    public:
        Pedido(int id = 0, float m = 0.0) : idPedido(id), monto(m) {}
    };
}
#endif