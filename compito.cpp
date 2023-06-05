/*
	Scrivere un programma C/C++ che preso in input un array di interi restituisca: - il massimo - il minimo - la media aritmetica - il numero di valori pari e quelli dispari
*/

#include <iostream>
using namespace std;

int main() {
	//dichiarazione variabili
	int quanti_numeri, massimo = 0, minimo = 2147483647, quanti_pari = 0, quanti_dispari = 0, temp;
	double media = 0;

	//richiesta della quantita dei numeri
	cout << "quanti numeri ci sono? ";
	cin >> quanti_numeri;

	//dichiarazione array
	int numeri[quanti_numeri /*si usa la quantità data dall'utente per dichiarare la lunghezza dall'array*/];

	//richiesta dei numeri
	cout << "inserire i numeri:";

	//for in loop per inserire ogni numero nell'array
	for (int i = 0; i < quanti_numeri; i++){
		//si rende il tutto più leggibile
		cout << "\n\t";

		//si mette il numero dato dall'utente in una variabile create apposta
		cin >> temp;

		//si mette il numero salvato nella variabile apposita nell'array
		numeri[i] = temp;

		//si trova la somma di tutti i numeri
		media += temp;

		//si trovano i pari e dispari
		if (temp%2 /*se il numero è divisibile per 2 il compilatore restituisce un resto 0, quindi la condizione è considerata falsa, se il numero non è divisibile per 2 il compilatore restituisce un resto di 1, quindi la condizione è considerata vera*/){
			//se la condizione è vera il numero è dispari
			quanti_dispari++;
		}
		else{
			//altrimenti è pari
			quanti_pari++;
		}

		//si trovano quale è il numero più grande
		if (temp > massimo){
			massimo = temp;
		}

		//si trova il numero più piccolo
		if (temp < minimo){
			minimo = temp;
		}
		

	}
	
	//si trova la media dividendo la somma di tutti i numeri per il 
	media = media/quanti_numeri;

	

return 0;
}