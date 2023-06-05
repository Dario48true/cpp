/*
	calcolo del fattoriale e della sommatoria di gauss
*/

#include<iostream>
using namespace std;

// Gauss
int Gauss(int num)
{
	int gauss = 0;

	for (int i = num; i > 0; i--)
	{
		gauss += i;
	}

	return gauss;
}

// fattoriale
int fattoriale(int num)
{
	int fattoriale = 1;

	for (int i = num; i > 0; i--)
	{
		fattoriale *= i;
	}

	return fattoriale;
}

int main()
{
	int num;
	
	cout << "dammi il numero ";
	cin >> num;

	cout << "il fattoriale è " << fattoriale(num) << " e la sommatoria di Gauss è " << Gauss(num);\

	return 0;
}