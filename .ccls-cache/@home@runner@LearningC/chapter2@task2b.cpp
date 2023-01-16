#include <iostream>

using namespace std;

int main() {
  unsigned int ival = 0;
  cout << "Bitte ganze Zahl: ";
  cin >> ival;

  // Endlosschleife
  while (ival > 0) {
    if (ival % 2)
      continue;
    cout << ival << endl;
    ival--;
  }

  return 0;
}
