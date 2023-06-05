/*
    fattoriale
*/

#include <iostream>
using namespace std;

int main(){
    int num, fattoriale;
    
    cout<<"inserire un numero ";
    cin>>num;
    fattoriale = 1;

    for(int i = 1; i <= num; i++){
        fattoriale *= i;
    }
    cout<<"il fattoriale di "<<num<<" e' "<<fattoriale;
return 0;
}