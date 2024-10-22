#include <iostream>
using namespace std;

int main()
{
    int senhareal, senha;

    senhareal = 1234;
    cout<<"Digite sua senha: ";
    cin>>senha;
    if (senhareal != senha){
        cout<<"A senha está incorreta!";
    }
    else{
        cout<<"A senha está correta!";
    }
    return 0;

}