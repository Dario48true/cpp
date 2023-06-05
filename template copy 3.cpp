/*
    l'utente inserisce due numeri e chiede l'operazione da fare poi la fa
*/

#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    char operazione[] = "";

    cout<<"dammi il primo numero ";
    cin>>num1;
    cout<<"dammi il secondo numero ";
    cin>>num2;
    cout<<"quale operazione vuoi fare? ";
    cin>>operazione;

    switch (operazione[0]){
        case 'a':
            cout<<(num1+num2);
            break;
        
        case 's':
            cout<<(num1-num2);
            break;
        
        case 'm':
            cout<<(num1*num2);
            break;
        
        case 'd':
            cout<<(num1/num2);
            break;

        default:
            cout<<"non un operazione supportata";
            break;
    }
return 0;
}