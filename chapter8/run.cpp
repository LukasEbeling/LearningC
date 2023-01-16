#include "Automat.h"
#include <iostream>

int main() {
  Automat mat1 = Automat("Hamburg", 100);
  Automat mat2 = Automat("Hamburg", 1000);
  Automat mat3 = Automat("Berlin", 100);

  std::cout << (mat1 == mat2) << std::endl;
  std::cout << (mat1 != mat3) << std::endl;

  return 0;
}