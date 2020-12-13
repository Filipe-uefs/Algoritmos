#include <iostream>
// https://neps.academy/problem/2
using namespace std;
int main(){
    int n[3];
    cin >> n[0] >> n[1] >> n[2];
    int vetor[3];
    for(int i=1;i<4;i++){
        int num =1;
        for(int x=0;x<3;x++){
            if(n[x]<n[i-1]) num++;
        }
        vetor[num-1] = i;
    }
    cout << vetor[0] << endl;
    cout << vetor[1] << endl;
    cout << vetor[2] << endl;
    return 0;
}
