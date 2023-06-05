#include<iostream>
using namespace std;

int maggiore(double num1, double num2, double num3){
	if (num1>num2){
		if (num1>num3){
			return num1;
		}
		return num3;
	}
	if (num3>num2){
		return num3;
	}
	return num2;
}

int main(){
	double num1, num2, num3;
	int caso;
	cout<<"cosa vuoi fare?\n1. somma tra 3 interi\n2. media tra 3 interi\n3. maggiore tra 3 interi\n4. tutte le 3 cose viste precedentemente\n5. esci dal programma\n";
	cin>>caso;
	while (true){
		cout<<"dammi il primo numero ";
		cin>>num1;
		cout<<"dammi il secondo numero ";
		cin>>num2;
		cout<<"dammi il terzo numero ";
		cin>>num3;
		
		switch (caso){
	case 1:
		cout<<num1+num2+num3<<" è la somma";
		break;

	case 2:
		cout<<(num1+num2+num3)/2<<" è la media";
		break;

	case 3:
		cout<<"il maggiore è "<<maggiore(num1, num2, num3);
		break;

	case 4:
		cout<<num1+num2+num3<<" è la somma";
		cout<<(num1+num2+num3)/2<<" è la media";
		cout<<"il maggiore è "<<maggiore(num1, num2, num3);
		break;

	case 5:
		return 0;

	default:
		cout<<"caso non riconosciuto";
		break;
		}
	}
}