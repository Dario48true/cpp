/*

*/

#include <iostream>
using namespace std;

int main() 
{
	int lunghezza;
	cout << "quanto è l'ungo l'array? ";
	cin >> lunghezza;
	int numeri[lunghezza], pari, dispari;
	for (int i = 0; i < lunghezza; i++)
	{
		cin >> numeri[i];
	}
	for (int i = 0; i < lunghezza; i++)
	{
		if (i%2)
		{
			dispari += numeri[i];
		}
		else
		{
			pari += numeri[i];
		}
	}
	cout << "la somma dei numeri in posizioni pari è " << pari << ", mentre quella dei numeri in posizioni dispari è " << dispari;
return 0;
}