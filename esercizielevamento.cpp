/*
    calcolo della potenza
*/

#include <iostream>
using namespace std;

//funzione per il calcolo della potenza
double potenza(double num1, int num2){
    //dichiarazione variabili
    long double risultato = 1;

    //calcolo della potenza
    for (int i = 0; i < num2; i++){
        risultato = num1 * risultato;
    }

    //ritorna il risultato al programma principale
    return risultato;
}

int main(){
    //dichiarazione variabili
    char conferma[3]; //array di caratteri
    double num1; //base
    int num2; //esponente

    //loop che continua fino a che l'utente lo richiede
    do {

        //richiesta dei 2 numeri
        cout<<"dammi il primo numero ";
        cin>>num1;
        cout<<"dammi il secondo numero ";
        cin>>num2;

        //gestione degli esponenti negativi
        if (num2 < 0){
            num2 = -1 * num2;
            num1 = 1/num1;
        }

        //ritorna la potenza all'utente
        cout<<"il numero 1 elevato al numero 2 è "<<potenza(num1, num2)<<"\n";

        //chiede all'utente se vuole continuare
        cout<<"vuoi continuare? ";
        cin>>conferma;
    } while (tolower(conferma[0]) != 'n' && tolower(conferma[1]) != 'o');
    return 0;
}