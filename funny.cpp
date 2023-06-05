/*
variabili.exe
*/


#include <iostream>
using namespace std;

int main(){
    int numerointero1;
    int numerointero2;
    int somma;
    bool novedieci;
    bool diecinove;
    cout<<"inserire un intero ";
    cin>>numerointero1;
    cout<<"inserire un altro intero ";
    cin>>numerointero2;
    somma = numerointero1 + numerointero2;
    novedieci = numerointero1 == 9 && numerointero2 == 10;
    diecinove = numerointero1 == 10 && numerointero2 == 9;
    if (novedieci|| diecinove){
        cout<<"idk bro 21";
    }
    else{
        cout<<"la somma e' "<<somma;
    }
return 0;
}