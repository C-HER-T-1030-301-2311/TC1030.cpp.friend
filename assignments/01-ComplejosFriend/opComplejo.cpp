#include "Complejo.hpp"

Complejo resta(Complejo c1, Complejo c2) {
    int realN = c1.real - c2.real;
    int imagN = c1.imag - c2.imag;

    Complejo nuevo(realN, imagN);

    return nuevo;
}