#include <iostream>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    float notas, cont, acum, contreal;
    acum = 0;

    for(cont = 1; cont <= 10; cont++){
        cout<<"Digite a nota: "<<endl;
        cin>>notas;
        acum += notas;
        contreal++;

    }
    cout<<acum/contreal;
}