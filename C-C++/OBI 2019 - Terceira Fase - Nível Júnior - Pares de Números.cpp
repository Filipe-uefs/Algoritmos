#include <iostream>
// link https://neps.academy/problem/565
using namespace std;

int main()
{
    int n,k,f;
    cin >> n >> k >> f;
    int lista[n];
    for(int x=0;x<n;x++){
        cin >>lista[x];
    }
    int cont = 0;
    for (int x=0;x<n;x++){
        for(int i=x+1;i<n;i++){
            if(lista[x] + lista[i]>=k && lista[x] + lista[i]<=f ){
                cont++;
            }
        }
    }
    cout << cont << endl;
    return 0;
}
