#include <iostream>
using namespace std;
int main(){
   
    float quantiMaca, valortotal;

    cout<<"Digite a quantidade de maça que o cliente deseja comprar: "<<endl;
    cin>>quantiMaca;
    if (quantiMaca < 12){
        cout<<"O cliente irá pagar: "<<quantiMaca * 0.30;
    }
    else{
        cout<<"O cliente irá pagar: "<<quantiMaca * 0.25;
    }
}