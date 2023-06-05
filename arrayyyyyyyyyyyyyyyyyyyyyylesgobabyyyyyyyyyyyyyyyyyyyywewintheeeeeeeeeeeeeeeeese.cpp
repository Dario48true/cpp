/*
	array lesgooooo boyz
*/

#include <iostream>
using namespace std;

int media(int numeri[100]){
	float somma = 0;
	for (int i = 0; i < 100; i++){
		somma += numeri[i];
	}
	return somma/100;
}

int main() 
{
	
	int e[100];
	for (int i = 0; i < 100; i++){
		cin>>e[i];
	}

	cout<<media(e);
return 0;
}