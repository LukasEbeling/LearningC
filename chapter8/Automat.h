#include <string>

class Automat {
private:
  unsigned long geld;
  std::string standort;

public:
  Automat(std::string, unsigned long);
  unsigned long get_geld() { return geld; };
  std::string get_ort() { return standort; };
  bool operator==(Automat &);
  bool operator!=(Automat &);
};