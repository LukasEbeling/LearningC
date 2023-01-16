#include <iostream>
using namespace std;

int umfang(int = 0, int = 0);
int flaeche(int = 0, int = 0);

int main() {
  int l, b;
  cout << "Länge: ";
  cin >> l;
  cout << "Breite: ";
  cin >> b;
  cout << "Umfang: " << umfang(l, b) << endl;
  cout << "Fläche: " << flaeche(l, b) << endl;
}

int umfang(int x, int y) { return 2 * (x + y); }

int flaeche(int x, int y) { return x * y; }