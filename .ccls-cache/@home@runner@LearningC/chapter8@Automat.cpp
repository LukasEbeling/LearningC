#include "Automat.h"

Automat::Automat(std::string ort, unsigned long betrag) {
  geld = betrag;
  standort = ort;
}

bool Automat::operator==(Automat &device) {
  return this->get_ort() == device.get_ort();
}

bool Automat::operator!=(Automat &device) {
  return this->get_ort() != device.get_ort();
}