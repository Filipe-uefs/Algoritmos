#include <iostream>
#include <math.h>
using namespace std;
bool primo(int n,int x){
    if (n==2){
        return true;
    } if (n%x==0 and x!=1 and x!=n){
        return false;
    } if (n==x){
        return true;
    }
    return primo(n,x+1);
        
}
int main()
{
  int n;
  cin >> n;
  if (n==1){
    cout << "N" << endl;
  }
  else if (primo(n,1)){
    cout << "S" << endl;
  } else{
    cout << "N" << endl;
    }
}
