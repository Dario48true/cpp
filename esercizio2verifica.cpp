#include<iostream>
using namespace std;

int main(){
	char ACGT;
	int num, numA = 0, numC = 0, numG = 0, numT = 0;
	cout<<"quanto è lunga la sequenza?";
	cin>>num;
	cout<<"inserisci la sequenza";
	for (int i; i < num; i++){
cin>>ACGT;
switch (ACGT){
	case 'A':
		numA ++;
        break;
	case 'C':
		numC ++;
        break;
	case 'G':
		numG ++;
        break;
	case 'T':
		numT ++;
        break;
}
	}
	cout<<"il numero di A è "<<numA<<"il numero di C è "<<numC<<"il numero di G è "<<numG<<"il numero di T è "<<numT;
	cout<<"la frequenza di A è"<<(numA/num)*100<<"la frequenza di C è"<<(numC/num)*100<<"la frequenza di G è"<<(numG/num)*100<<"la frequenza di T è"<<(numT/num)*100;
	return 0;
}