#include <iostream>
using namespace std;

int a = 0;

void Inc(void) {
  int b = 0;
  ++a;
  ++b;
  cout << "a = " << a << ", b =" << b << endl;
}

int c = 2;

int main() {
  Inc();
  Inc();
  Inc();
}
