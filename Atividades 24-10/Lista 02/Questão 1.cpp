#include <iostream>
using namespace std;

int main(){

    int idade, cont, idades = 0;
        for(cont = 0; cont < 10; cont++){
            cout<<"Digite sua idade: "<<endl;
            cin>>idade;
        
            if(idade >= 18 && idade <= 35)
            {
                int i = 0;
                i++;
                idades+=i;         
            }
        

        }
    cout<<idades<<endl;
}