#include <iostream>
using namespace std;

int main(){
  double dval = 0;
  cout << "Bitte Strecke (km) eingeben: ";
  cin >> dval;
  cout << "Strecke (mile): " << dval*1.6 << endl;
  return 0;
}