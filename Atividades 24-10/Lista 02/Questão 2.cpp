#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int num, cont;
    

    cout<<"Digite um número: "<<endl;
    cin>>num;

    for(cont = 1; cont < 11; cont++){
        cout<<num;
        cout<<" X ";
        cout<<cont;
        cout<<" = ";
        cout<<num*cont<<endl;
    }
}