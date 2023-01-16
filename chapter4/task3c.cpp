#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec(0);
  int size = 0;
  int sum = 0;

  std::cout << "Wie viele Werte?";
  std::cin >> size;
  std::cout << "Werte?";

  for (int i = 0; i < size; i++) {
    int value = 0;
    std::cin >> value;
    vec.push_back(value);
  }
  for (int elem : vec) {
    sum += elem;
  }

  std::cout << sum;
}