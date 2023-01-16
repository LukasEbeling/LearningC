#include <iostream>

using namespace std;

double multiply(double, double);

int main() {
  double dval1 = 0.0, dval2 = 0.0;
  cout << "Zahl 1 eingeben: ";
  cin >> dval1;
  cout << "Zahl 2 eingeben: ";
  cin >> dval2;
  cout << "Das Ergebnis ist: " << multiply(dval1, dval2) << endl;
  return 0;
}

double multiply(double dval1, double dval2) { return dval1 * dval2; }