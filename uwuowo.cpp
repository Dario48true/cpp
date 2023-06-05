/*

*/


#include <iostream>
using namespace std;


int main()
{
	float media = 0;
	int quanti, numero, massimo = 0, minimo = 2147483647, pari = 0, dispari = 0;
	cout << "quanti numeri? ";
	cin >> quanti;
	int numeri[quanti];
	cout << "dammi i numeri: \n";
	for (int i = 0; i < quanti; i++){
		cin >> numero;
		numeri[i] = numero;
		if (numero > massimo)
		{
			massimo = numero;
		}
		if (numero < minimo)
		{
			minimo = numero;
		}
		if (numero%2)
		{
			dispari++;
		}
		else
		{
			pari++;
		}
		media += numero;
		cout << "";
	}
	media /= quanti;
	cout << "la media è " << media << ", il numero massimo è " << massimo << ", il numero minimo è " << minimo << ", i numeri pari sono " << pari << " e i dispari " << dispari;

return 0;
}