#include <string>
#ifndef _AUTOMAT_CHH_
#define _AUTOMAT_CHH_

class Automat {
private:
  std::string standort = "";
  unsigned long geld = 0L;

public:
  Automat(std::string ort, unsigned long betrag);
  Automat() : Automat("", 0L){};
  unsigned long get_geld() const { return geld; };
  void set_geld(unsigned long betrag) { geld = betrag; };
  std::string get_ort() const { return standort; };
  void set_ort(std::string ort) { standort = ort; };
  void print();
};

#endif