#include "Complejo.hpp"

Complejo resta(Complejo c1, Complejo c2) {
    int realN = c1.getReal() - c2.getReal();
    int imagN = c1.getImag() - c2.getImag();

    Complejo nuevo(realN, imagN);

    return nuevo;
}