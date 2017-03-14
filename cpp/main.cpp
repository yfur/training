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

  cout << "f(1, 2) = " << f(1, 2) << endl;
  Show(1, 2);
  hello();
}
