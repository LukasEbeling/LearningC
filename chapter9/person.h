#include <iostream>
#include <string>
#ifndef _PERSON_H_
#define _PERSON_H_
#define STRING std::string

class person {
private:
  std::string name, surname;

public:
  void set_name(STRING n) { name = n; };
  void set_surname(std::string sn) { surname = sn; };
  std::string get_name() const { return name; };
  std::string get_surname() const { return surname; };
  person(std::string n = "", std::string sn = "") {
    name = n;
    surname = sn;
    std::cout << name << " " << surname << " ";
  };
};

#endif