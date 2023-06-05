

#include <iostream>
using namespace std;


int main() {
    int num, par = 0, dispar = 0, par5 = 0;
    for (int i = 0; i < 10; i++){
        cout<<"dammi un numero ";
        cin>>num;
        if (!(num % 2)){
            if (!(num % 5)){
                par5++;
            }
            par++;
        }
        else{
            if (!(num%5)){
                dispar++;
            }
        }
    }
    cout<<par<<"sono pari, "<< par5<<" sono anche divisibili per 5, "<<10-par<<" sono dispari, "<<dispar<<" sono anche divisibili per 3 e per 5";
return 0;
}