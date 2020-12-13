#include <iostream>
#include <string>
// link (https://www.urionlinejudge.com.br/judge/pt/problems/view/1936)
using namespace std;
int calcularFatorial(int number){
	int resultado=1;
	for (int x=1;x<=number;x++){
		resultado = resultado * x;
	}
	return resultado;
}
int main(){
	int number,fat;
	int contador =0;
	int cont=0;
	cin >> number;
	while (true){
		fat = calcularFatorial(cont);
		if (fat<=number){
			cont++;
		} else{
			number = number - calcularFatorial(cont-1);
			cont = 0;
			contador++;
			if (number==0){
				break;
			}
		}
	}
	cout << contador << endl;
	
	return 0;
}
