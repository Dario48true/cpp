/*
da minore qa maggiore.exe
*/


#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(){
    char* conferma;
    list<int> numeri;
    int imput;
    cout<<"aggiungi un numero alla lista ";
    cin>>imput;
    numeri.push_back(imput);
    cout<<"aggiungere un altro numero (yes/no)? ";
    cin>>conferma;
    if (const_cast<char*>(conferma) == "y" || const_cast<char*>(conferma) == "Y"){
        cout<<"aggiungi un numero alla lista ";
        cin>>imput;
        numeri.push_back(imput);
        cout<<"aggiungere un altro numero (yes/no)? ";
        cin>>conferma;
    }
    
    auto primo = numeri.front();
    cout<<primo;
    for (auto i = 0; i < numeri.size(); i += 1){
        cout<<numeri;
    }
return 0;
}