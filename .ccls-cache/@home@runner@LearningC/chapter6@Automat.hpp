#include  <string>
#ifndef _AUTOMAT_CHH_
#define _AUTOMAT_CHH_

class Automat {
  private:
    std::string standort = "";
    unsigned long geld = 0;

  public:
    Automat(string ort, unsigned long betrag);
    Automat();
    unsigned long get_geld() {return geld;} const;
    void set_geld(unsigned long betrag) {geld = betrag;};
    std::string get_ort() {return standort;} const;
    void set_ort(std::string ort) {standort = ort;};
};

Automat::Automat(string ort, unsigned long betrag){
  
}

#endif