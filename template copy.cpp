/*
    template
*/

#include <iostream>
using namespace std;

int main(){
    char risposta[] = "";
    do
    {
        cout<< "ti piace il capitalismo? ";
        cin>>risposta;
    } while (risposta[0] != 'n' && risposta[0] != 'N');

    cout<<"bene";
    
return 0;
}