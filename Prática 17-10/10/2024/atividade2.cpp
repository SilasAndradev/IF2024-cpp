#include <iostream>
using namespace std;

int main()
{
    int ano, idade;
    cout<<"Digite o ano em que você nasceu: "<<endl;
    cin>>ano;
    idade = 2024 - ano;
    if (idade >= 18){
        cout<<"Maior de idade."<<endl;
    }
    else{
        cout<<"Menor de idade."<<endl;
    }

    return 0;

}