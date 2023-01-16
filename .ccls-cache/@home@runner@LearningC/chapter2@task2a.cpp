#include <iostream>

using namespace std;

int main() {
  int ival = 0;
  cout << "Bitte ganze Zahl: ";
  cin >> ival;
  // 0 wird auf false gecastet
  if (ival) {
    cout << "Wert ungleich 0\n";
  } else {
    cout << "Wert gleich 0\n";
  }
  return 0;
}
