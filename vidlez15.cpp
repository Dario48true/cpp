/*
variabili.exe
*/


#include <iostream>
using namespace std;

int main(){
    double numero1;
    double numero2;
    double somma;
    double sottrazione1;
    double sottrazione2;
    double moltiplicazione;
    double divisione1;
    double divisione2;
    double numero3;
    cout<<"inserire un numero ";
    cin>>numero1;
    cout<<"inserire un altro numero ";
    cin>>numero2;
    cout<<"inserire un altro numero ";
    cin>>numero3;
    somma = numero1 + numero2 + numero3;
    sottrazione1 = (numero1 - numero2) - numero3;
    sottrazione1 = numero1 - (numero2 - numero3);
    moltiplicazione = numero1 * numero2 * numero3;
    divisione1 = (numero1/numero2)/numero3;
    divisione2 = numero1/(numero2/numero3);
    cout<<"la somma e' "<<somma<<", la sottrazione del secondo al primo, e poi del terzo al risultato e' "<<sottrazione1<<", la sottrazione del secondo al terzo, e poi il risultato al primo e' "<<sottrazione2<<", la moltiplicazione e' "<<moltiplicazione<<", la divisione del secondo al primo, e poi del risultato al terzo e' "<<divisione1<<" e la divisione del terza al secondo, e poi il primo al risultato e' "<<divisione2;
return 0;
}