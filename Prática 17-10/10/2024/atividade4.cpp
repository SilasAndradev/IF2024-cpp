#include <iostream>
using namespace std;

int main(){
    int nota1,nota2,nota3,media;
    cout<<"Digite a sua primeira nota: "<<endl;
    cin>>nota1;
    cout<<"Digite a sua segunda nota: "<<endl;
    cin>>nota2;
    cout<<"Digite a sua terceira nota: "<<endl;
    cin>>nota3;

    media = (nota1 + nota2 + nota3) / 3;
    if (media >= 6){
        cout<<"Você está aprovado."<<endl;
    }
    else if(media >= 3 && media < 6){
        cout<<"Você está em recuperação"<<endl;
    }
    else{
        cout<<"Você está reprovado"<<endl;
    }
    return 0;
}