#pragma once
#include <iostream>

class Complejo {
private:
    int real, imag;
public:
    Complejo();
    Complejo(int, int);

    int getReal();
    void setReal(int);
    int getImag();
    void setImag(int);

    Complejo suma(Complejo);

    friend Complejo resta(Complejo, Complejo);
    friend std::ostream& operator<<(std::ostream&, const Complejo&);
};