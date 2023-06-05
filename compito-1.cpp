/*

*/

#include <iostream>
using namespace std;

int main() 
{
	int lunghezza, ripetizioni = 0;
	cout << "quanto è l'ungo l'array? ";
	cin >> lunghezza;
	char caratteri[lunghezza], test;
	for (int i = 0; i < lunghezza; i++)
	{
		cin >> caratteri[i];
	}
	cout << "inserire il carattere test: ";
	cin >> test;
	for (int i = 0; i < lunghezza; i++)
	{
		if (test = caratteri[i])
		{
			ripetizioni++;
		}
	}
	cout << "il carattere è presente " << ripetizioni << " volte";
return 0;
}