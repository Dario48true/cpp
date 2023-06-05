/*
    template
*/

#include <iostream>
using namespace std;

int main(){
    int i = 0, num, j = 2, divisori = 0;
    while (i < 10){
        cout << "dammi un numero ";
        cin >> num;
        while (num/2 >= j){
            if (!(num%j)){
                cout << j << " ";
                divisori ++;
            }
            j++;
        }
        if (divisori > 0){
            cout<< " sono/e' i/il divisori/e di " << num << "\n";
        }
        else {
            cout << num << " non ha divisori\n";
        }
        j = 2;
        divisori = 0;
        i++;
    }
return 0;
}