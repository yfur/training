#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "値を入れてね >>> " << flush;
  cin >> a;
  cout << "その値を3で割ったあまりは " << a%3 << endl;
}
