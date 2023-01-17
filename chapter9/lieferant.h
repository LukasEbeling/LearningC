#include "person.h"
#include <string>
#ifndef _LIEFERANT_H_
#define _LIEFERANT_H_

class lieferant : public person {
private:
  std::string steuerid;

public:
  void set_id(std::string id) { steuerid = id; };
  std::string get_id() const { return steuerid; };
  lieferant(std::string n = "", std::string sn = "", std::string num = "")
      : person(n, sn) {
    steuerid = num;
    std::cout << steuerid;
  };
};

#endif