#include <iostream>
#include <string>
#include <vector>

int main() {
  int *myArray(void);
  int *ptr = myArray();
  int array[10];
  for (int elem : *ptr) {
  }
}

int *myArray() {
  static int a[10];
  for (int i = 0; i < 10; i++) {
    a[i] = i;
  }
  return a; // return array aka pointer
}

