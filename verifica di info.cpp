/*
	programma per la verifica che restituisce la media aritmetica di un tot di numeri dati dall’utente
*/

#include <iostream>
using namespace std;

int main(){
	int somma = 0, num, numero;
	float media;
	char risposta[] = "";
	do{
		cout<<"dammi un numero ";
		cin>>num;
		somma += num;
		cout<< "interrompere?(y/n) ";
		cin>>risposta;
		numero++;
	} while (risposta[0] != 'y' && risposta[0] != 'Y');
	media = somma/numero;
	cout<< "la media e' "<<media;
return 0;
}