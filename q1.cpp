#include <iostream>
using namespace std;

long superpower (long a, long b) {
  long sp = 1;
  for (int k=0; k<b; k++) {
    sp = sp * a;
  }
  return sp;
}

int main () {
  long x;
  long y,z;

cout << "Write a value: " ;
cin>> y ;

cout << "Write the another value: ";
cin >> z;

  x= superpower (y,z);
  cout << x << endl;
  return 0;
}
