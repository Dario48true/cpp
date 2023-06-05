/*
	dati i lati di un triangolo e la sua altezza, realizzare un menù di scelta per restituire are e perimetro, il tipo di triangolo o entrabme.
*/

#include<iostream>
#include<string>
using namespace std;
string tipo(int lato1, int lato2, int lato3){
	if (lato1 == lato2){
		if (lato2 == lato3){
			return "equilatero";
		}
		return "isoscele";
	}
	return "scaleno";
}


int main() {
	int lato1, lato2, base, altezza, scelta, area, perimetro;
	int area = 0, perimetro = 0;

	cout << "dammi la base";
	cin >> base;
	cout << "dammi il lato 1";
	cin >> lato1;
	cout << "dammi il lato 2";
	cin >> lato2;
	cout << "dammi l'altezza";
	cin >> altezza;
	
	cout << "vuoi\n1. perimetro e area\n2. il tipo di triangolo\n3. entrambi\n4. chiudere il programma";
	cin >> scelta;

	area = base * altezza;
	perimetro = lato1 + lato2 + base;

	switch (scelta){
	case 1:
		cout << "l'area è " << area << " e il perimetro è " << perimetro;
		break;
	
	case 2:
		cout << "il triangolo è " << tipo(lato1, lato2, base);
		break;
	
	case 3:
		cout << "l'area è " << area << ", il perimetro è " << perimetro << " e il triangolo è " << tipo(lato1, lato2, base);
		break;

	default:
		break;
	}

	return 0;
}