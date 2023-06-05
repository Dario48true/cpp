#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, media;

    cout << "Inserire il primo valore: ";
    cin >> num1;

    cout << "Inserire il secondo valore: ";
    cin >> num2;

    cout << "Inserire il terzo valore: ";
    cin >> num3;

    media = (num1 + num2 + num3) / 3;

    cout << "La somma dei tre valori è: " << num1 + num2 + num3;
    cout << "La media dei tre valori è: " << media;

    if (media > 5.9) {
        cout << "Promosso";
    } else {
        cout << "Bocciato";
    }

return 0;
}