#include <iostream>
#include <string>
#include <vector>

int main() {

  struct names {
    std::string name, surname;
    int day, month, year;
  };

  std::vector<names> group(10);
  group[4].name = "marc";

  for (names elem : group) {
    std::cout << elem.name << "\n";
  }
}
