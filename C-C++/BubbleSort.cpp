#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int vetor[n];
    for(int x=0;x<n;x++){
        cin >> vetor[x];
    }
    for(int x=0;x<n;x++){
        for(int i=0;i<x;i++){
            if(vetor[i]>vetor[x]){
                int aux = vetor[x];
                vetor[x] = vetor[i];
                vetor[i] = aux;
            }
        }
    }
    for(int x=0;x<n;x++){
        cout << vetor[x] << " ";
    }
    cout << endl;
    return 0;
}
