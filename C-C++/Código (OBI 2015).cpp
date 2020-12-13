// Example program
#include <iostream>
#include <string>
using namespace std;
// link (https://neps.academy/problem/47)
int main()
{
    int n;
    cin >> n;
    int vetor[n];
    for (int x=0;x<n;x++){
        cin >> vetor[x];
    }
    int cont = 0;
    for (int x=0;x<n-2;x++){
        if (vetor[x]==1 and vetor[x+1]==0 and vetor[x+2]==0){
            cont++;
        }
    }
    cout << cont << endl;

}
