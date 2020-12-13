#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void listarNumbers(int numbers[100]){
	for (int x=0;x<100;x++){
		if (numbers[x]!=0){
			cout<<numbers[x]<<" ";
		}
		
	}
}

int main(){
	srand((int)time(0));
	int numero = (rand() % 100) + 1;
	int car[100];
	for (int x=1;x<=100;x++){
		car[x-1]=x;
	}
	listarNumbers(car);
	int numberEscolhido;
	while (true){
		cout<<"\n\n\nDigite o número desejado de acordo com a lista a cima"<<endl;
		cin>>numberEscolhido;
		if (numberEscolhido==numero){
			cout<<"Parábens, você ganhou!!!!";
			break;
		}
		else if (numberEscolhido>numero){
			for (int x=numberEscolhido;x<=100;x++){
				car[x-1] = 0;
			}
		} else {
			for (int x=1;x<=numberEscolhido;x++){
				car[x-1] = 0;
			}
		}
		listarNumbers(car);
	}

		
 
	system("pause");	
	return 0;
}
