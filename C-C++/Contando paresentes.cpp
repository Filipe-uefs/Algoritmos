#include <iostream>
#include <string>
using namespace std;

int main()
{
    string caracter;
    while((cin >> caracter)){
    int direito = 0;
    bool open = true;
    char n = {'('};
    char m = {')'};
    for (int x=0;x<caracter.size();x++){
        if (caracter[x]==n){
            direito++;
        } else if(caracter[x]==m){
            if (direito>0){
                direito--;
            } else{
                open = false;
            }
        }
    }
    if (direito==0 and open){
        cout << "correct" << endl;
    } else{
        cout << "incorrect" << endl;
    }
    }
    
    return 0;
}
