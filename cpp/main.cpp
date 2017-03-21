#include <iostream>
using namespace std;

int f(int x, int y){
  return 2 * x + y;
}

void Show(int x, int y) {
  cout << "f(" << x << ", " << y << ") = " << f(x, y) << endl;
}

void hello(void) {
  cout << "こんにちは" << endl;
}

int main(){
  // cout << "hello world" << "hello world" << endl;
  // cout << "1 + 2 = " << 1+2 << endl;
  // cout << "1 / 2 = " << 1/2 << endl;
  // cout << "1 % 2 = " << 1%2 << endl;
  // cout << "1 * 2 = " << 1*2 << endl;

  // int a;
  // a = 0;
  // cout << "a = " << a << endl;
  // a = 5;
  // cout << "a = " << a << endl;
  // a += 2;
  // cout << "a = " << a << endl;
  // ++a;
  // cout << "a = " << a << endl;
  // a = a * a + 2;
  // cout << "a = " << a << endl;

  // cout << "f(1, 2) = " << f(1, 2) << endl;
  // Show(1, 2);
  // hello();
  //
  // int a = 0;
  // do {
  //   ++a;
  //   if (a > 5) {
  //     continue;
  //   }
  //   cout << "a = " << a << endl;
  // }
  // while (a < 10);

  // int a;
  // a = 10;
  // cout << "a = " << a << endl;
  // cout << "size of a = " << sizeof(a) << endl;
  // bool b;
  // b = true;
  // cout << "b = " << b << endl;
  // cout << "size of b = " << sizeof(b) << endl;
  // char c;
  // c = (char)a;
  // cout << "c = " << c << endl;
  // cout << "size of c = " << sizeof(c) << endl;
  // int d;
  // d = (int)a;
  // cout << "d = " << d << endl;
  // cout << "size of d = " << sizeof(d) << endl;

  int n[10];
  for (int i = 0; i < 10 ; ++i) {
    n[i] = i;
  };
  cout << n[0] << endl;
  cout << n[5] << endl;

  int& r = n[3];

  cout << r << endl;
  cout << n[3] << endl;

  r = 11;

  cout << r << endl;
  cout << n[3] << endl;

  n[3] = 20;

  cout << r << endl;
  cout << n[3] << endl;
}
