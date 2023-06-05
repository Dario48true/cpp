/*
    template
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    char risposta[3] = "si";
    int numeri[3];
    int numero;
    while (risposta[0] = 's'){
        for (int i = 1; i <= 3; i++){
            cout<< "inserisci il " << i << "o numero ";
            cin>>numero;
            numeri[i-1] = numero;
        }
        sort(begin(numeri), end(numeri));
        for (int i = 0; i < 3; i++){
            cout<<numeri[i]<<" ";
        }
        cout<<"sono i numeri in ordine\n";
        cout<<"voui continuare? ";
        cin>>risposta;
    }
return 0;
}