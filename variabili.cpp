/*
variabili.exe
*/


#include <iostream>
using namespace std;

int main(){
    double numero1;
    double numero2;
    double somma;
    double sottrazione;
    double moltiplicazione;
    double divisione;
    cout<<"inserire un numero ";
    cin>>numero1;
    cout<<"inserire un altro numero ";
    cin>>numero2;
    somma = numero1 + numero2;
    sottrazione = numero1 - numero2;
    moltiplicazione = numero1 * numero2;
    divisione = numero1/numero2;
    cout<<"la somma e' "<<somma<<", la sottrazione e' "<<sottrazione<<", la moltiplicazione e' "<<moltiplicazione<<" e la divisione e' "<<divisione;
return 0;
}