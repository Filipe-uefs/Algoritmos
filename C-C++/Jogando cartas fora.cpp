#include <iostream>
#include <queue>
using namespace std;
// link para o problema (https://www.urionlinejudge.com.br/judge/pt/problems/view/1110)
int main()
{
    int num;
    while(true){
        cin >> num;
        if(num==0) break;
        int ultimo;
        queue<int>fila ;
        for(int x=1;x<=num;x++){
            fila.push(x);
        }
        cout << "Discarded cards: ";
        while(true){
            if (fila.front()!=1) cout << ", ";
            cout <<fila.front();
            fila.pop();
            fila.push(fila.front());
            fila.pop();
            if(fila.size()==1){
                ultimo = fila.front();
                break;
            }
        }
        cout << endl << "Remaining card: " << ultimo << endl;
    }

    return 0;
}
