#include <iostream>
using namespace std;

int main() {
    char carattere;
    cout<<"dammi un carattere ";
    cin>>carattere;
    cout<<carattere;    
    if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u'){
        cout<<" e' una vocale";
    }
return 0;
}