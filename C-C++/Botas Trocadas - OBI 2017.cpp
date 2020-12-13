#include <iostream>
using namespace std;
// link (https://neps.academy/problem/19)
int main() {
  int tamanho;
  cin >> tamanho;
  string numero[tamanho];
  string lado[tamanho];
  for (int x=0;x<tamanho;x++){
      cin >> numero[x] >> lado[x];
  }
  int i=0,cont=0;
  string letra;
  while (i<tamanho){
    for (int x=0;x<tamanho;x++){
      if (numero[i]==numero[x] and lado[i]!=lado[x]  and numero[x]!=""){
        cont++;
        numero[x]="";
        numero[i]="";
        lado[x]="";
        break;
      }
    }
    i++;
  }
  cout << cont << endl;
  
}
