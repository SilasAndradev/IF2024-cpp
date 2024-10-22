#include <iostream>
using namespace std;

int main(){
    int valor1, valor2, valor3;
    cout<<"Digite o primeiro valor: "<<endl;
    cin>>valor1;
    cout<<"Digite o segundo valor: "<<endl;
    cin>>valor2;
    cout<<"Digite o terceiro valor: "<<endl;
    cin>>valor3;

    if(valor1 > valor2 && valor2 > valor3){
        cout<<"Os valores em ordem crescente: "<<valor1, valor2, valor3;
    }
    else if(valor1 > valor3 && valor3 > valor2){
        cout<<"Os valores em ordem crescente: "<<valor1, valor3, valor2;
    }
    else if(valor2 > valor3 && valor3 > valor1){
        cout<<"Os valores em ordem crescente: "<<valor2, valor3, valor1;
    }
    else if(valor2 > valor1 && valor1 > valor3){
        cout<<"Os valores em ordem crescente: "<<valor2, valor1, valor3;
    }
    else if(valor3 > valor1 && valor1 > valor2){
        cout<<"Os valores em ordem crescente: "<<valor3, valor1, valor2;
    }
    else if(valor3 > valor2 && valor2 > valor1){
        cout<<"Os valores em ordem crescente: "<<valor3, valor2, valor1;
    }
}