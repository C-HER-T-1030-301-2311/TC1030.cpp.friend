#include <iostream>

#include "Complejo.hpp"
#include "opComplejo.hpp"

int main() 
{
  Complejo compA(8,5), compB(5,2), compC;

  compC=compA.suma(compB);
  std::cout << compC;

  compC=resta(compA, compB);
  std::cout << compC;
}
