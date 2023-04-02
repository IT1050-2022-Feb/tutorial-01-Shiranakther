#include <iostream>
using namespace std;
int main() {
  float cm, inch;
  cout << "Enter length in centimeters: ";
  cin >> cm;
  inch = cm / 2.54;
  cout << "Lenght in inch is:" << inch << "inch" << endl;

  return 0;
}