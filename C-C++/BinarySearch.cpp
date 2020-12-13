#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>lista,int inicio,int final,int key){
	if (final==NULL){
		final = lista.size();
	} if (inicio<=final){
		int meio = (final + inicio)/2;
		if(lista[meio]==key){
			return meio;
		} else if(lista[meio]>key){
			cout << lista[meio] << "    " << key << endl;
			return binarySearch(lista,inicio,meio,key);
		} else{
			cout << lista[meio] << "    " << key << endl;
			return binarySearch(lista,meio,final,key);
		}
	}
	return -1;
}

int main(){
	vector<int>nums;
	nums.push_back(12);
	nums.push_back(14);
	nums.push_back(15);
	nums.push_back(19);
	nums.push_back(25);
	nums.push_back(29);
	
	cout << binarySearch(nums,0,NULL,19) << endl;
	return 0;
}

