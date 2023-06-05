#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Inserisci un numero ";
    cin >> numero;
    if (numero % 3 == 0 && numero % 5 != 0) {
        cout << numero << " è multiplo di 3 ma non di 5." << endl;
    }
return 0;
}