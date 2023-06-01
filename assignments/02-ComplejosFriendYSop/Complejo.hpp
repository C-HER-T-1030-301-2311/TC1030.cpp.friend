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

    Complejo operator+(Complejo);

    friend Complejo operator-(Complejo, Complejo);
    friend std::ostream& operator<<(std::ostream&, const Complejo&);
};