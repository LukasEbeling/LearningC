#include <iostream>
#include <string>
#include <vector>

int main() {
  int *myArray(void);
  int *ptr = myArray();
  int array[10];
  for (int elem : array) {
  }

  struct names {
    std::string name, surname;
    int day, month, year;
  };

  std::vector<names> group(10);
  group[4].name = "marc";
}

int *myArray() {
  static int a[10];
  for (int i = 0; i < 10; i++) {
    a[i] = i;
  }
  return a; // return array aka pointer
}
