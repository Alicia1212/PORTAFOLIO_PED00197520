#include <iostream>
using namespace std;
int MCD (int a, int b){
    if (b==0){
        return a;
    }
    return MCD(b, a % b);
}
int main (){
    int a,b;
    cout<<"||ALGORITMO DE EUCLIDES||"<<endl;
    cout<<"Escriba su Primer Numero: ";
    cin>>a;
    cout<<"Escriba su Segundo Numero: ";
    cin>>b;
    cout<<"su MCD es:\n"<<MCD(a,b);
    return 0;
}