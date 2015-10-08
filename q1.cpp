#include <iostream>
using namespace std;

void stars (int a) {
  for (int k=0; k<a ; k++) {
    cout << '*';

  }
}

int main () {
  int x;


  cout << "Write the number of stars (*) you want to print" << endl;

  cin >> x;

  stars (x);

  return 0;
}
