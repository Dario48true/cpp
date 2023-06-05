/*
    alla seconda
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    
    for(int i = 1; i <= 5; i++){
        cout<<"\ninserire un numero ";
        cin>>num;
        cout<<num<< " alla seconda e' " <<num*num;
    }
return 0;
}