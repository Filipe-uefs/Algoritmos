#include <iostream> 
using namespace std; 
// link (https://neps.academy/problem/15)
int main() 
{ 
    int contador =0;
    int capacidade,passageiros;
    cin >> capacidade;
    cin >> passageiros;
    while (true){
        passageiros = passageiros - (capacidade-1);
        contador = contador + 1;
        if (passageiros<=0){
            break;
        }
    }
    cout << contador <<endl;
    return 0; 
} 
