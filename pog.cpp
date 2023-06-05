#include <iostream>
using namespace std;

int main() {
    int num, somma;
    float media;
    for (int i = 0; i < 10; i++){
        cout<<"dammi un numero ";
        cin>> num;
        somma += num;
    }
    media = somma/10;
    cout<<media<<" e' la media";
return 0;
}