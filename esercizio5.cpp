#include <iostream>
using namespace std;

int main() {
    char carattere;
    cout<<"dammi un carattere ";
    cin>>carattere;
    if (carattere != 'a' && carattere != 'e' && carattere != 'i' && carattere != 'o' && carattere != 'u'){
        cout<<"\ne' una consonante";
    }
return 0;
}