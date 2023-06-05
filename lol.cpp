#include <iostream>
using namespace std;

bool primo(int numero){
    for (int i = 2; i <= numero; i++){
        if (numero % i){
            i = 0;
            return true;
        }
    }
    return false;
}
int main() {
    int num, primi;
    for (int j; j <= 10; j++){
        cout<<"dammi un numero ";
        cin>>num;
        if (primo(num)){primi++;};}
    cout<<primi<<" sono primi";
return 0;
}