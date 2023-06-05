#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"dammi un numero ";
    cin>>num;
    if (num % 2 == 0){
        cout<<num<<" e' divisibile per 2 \n";
    }
    if (num % 3 == 0){
        cout<<num<<" e' divisibile per 3 \n";
    }
return 0;
}