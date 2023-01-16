#include <iostream>
#include <vector>

int main() {
  int SIZE = 10;
  int array[SIZE];
  for (int i = 0; i < SIZE; i++) {
    array[i] = i + 1;
  }

  for (int i = 0; i < SIZE; i++) {
    std::cout << array[i] << std::endl;
  }

  std::vector<int> vec(10);

  for (int i = 0; i < vec.size(); i++) {
    vec[i] = i + 1;
  }

  for (int elem : vec) {
    std::cout << elem << std::endl;
  }
}
