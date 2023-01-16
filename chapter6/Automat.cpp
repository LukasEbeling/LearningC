#include "Automat.h"
#include <iostream>
#include <string>

Automat::Automat(std::string ort, unsigned long betrag) {
  set_ort(ort);
  set_geld(betrag);
}

void Automat::print() {
  std::cout << get_ort() << std::endl;
  std::cout << get_geld() << std::endl;
}
