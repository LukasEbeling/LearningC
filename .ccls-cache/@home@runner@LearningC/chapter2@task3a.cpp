#include <iostream>
using namespace std;

double addieren(double, double = 0);

int main() {
  cout << addieren(20) << endl;
  cout << addieren(20, 10) << endl;
  cout << addieren(5.5) << endl;
  cout << addieren(5.1, 6.123) << endl;
}

double addieren(double val1, double val2) { return val1 + val2; }