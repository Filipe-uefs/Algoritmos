#include <iostream>
// link (https://neps.academy/problem/822)
using namespace std;
int main() {
  int distancia;
  cin >> distancia;
  distancia = distancia -3;
  distancia = distancia%8;
  if (distancia==3){
    cout << 1 << endl;
  } else if (distancia==4) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
}
