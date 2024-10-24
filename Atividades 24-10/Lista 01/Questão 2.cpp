#include <iostream>
using namespace std;

int main(){
    int num, limite, cont;
    cont = 0;
    num = 0;
    cout<<"Digite um número: ";
    cin>>limite;

    do{
        cont ++;
        num = num + cont;
    }while (cont < limite);
    
    cout<< num << endl;
}