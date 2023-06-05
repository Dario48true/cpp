#include <iostream>
using namespace std;

int primo(int numero){
    for (int i = 2; i <= numero; i++){
        if (numero % i){
            return true;
        }
    }
    return false;
}
int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, primi;
    cout<<"dammi il primo numero ";
    cin>>num1;
    cout<<"dammi il secondo numero ";
    cin>>num2;
    cout<<"dammi il terzo numero ";
    cin>>num3;
    cout<<"dammi il quarto numero ";
    cin>>num4;
    cout<<"dammi il quinto numero ";
    cin>>num5;
    cout<<"dammi il sesto numero ";
    cin>>num6;
    cout<<"dammi il settimo numero ";
    cin>>num7;
    cout<<"dammi l'ottavo numero ";
    cin>>num8;
    cout<<"dammi il nono numero ";
    cin>>num9;
    cout<<"dammi il decimo numero ";
    cin>>num10;
    if (primo(num1)){primi++;};
    if (primo(num2)){primi++;};
    if (primo(num3)){primi++;};
    if (primo(num4)){primi++;};
    if (primo(num5)){primi++;};
    if (primo(num6)){primi++;};
    if (primo(num7)){primi++;};
    if (primo(num8)){primi++;};
    if (primo(num9)){primi++;};
    if (primo(num10)){primi++;};
    cout<<primi<<" sono primi";\
return 0;
}