#include <iostream>
#include <string>
using namespace std;

int main() {
    string parola;
    int somma = 0;

    cout << "Inserisci una parola: ";
    cin >> parola;

    // Calcola la somma dei valori delle lettere nell'alfabeto
    for (int i = 0; i < parola.length(); i++) {
        somma += parola[i] - 'a' + 1;
    }

    cout << "I divisori della somma dei valori delle lettere della parola sono: ";

    // Stampa i divisori della somma
    for (int i = 1; i <= somma; i++) {
        if (somma % i == 0) {
            cout << i << " ";
        }
    }

    return 0;
}
