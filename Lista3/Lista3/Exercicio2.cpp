#include <iostream>
using namespace std;
int main(){
 double saldo=1000,valor; int op;
 do{
  cout<<"\n1-Ver saldo\n2-Depositar\n3-Sacar\n4-Sair\nOpcao: ";
  cin>>op;
  switch(op){
   case 1: cout<<"Saldo: "<<saldo; break;
   case 2: cout<<"Valor: ";cin>>valor; if(valor>0) saldo+=valor; else cout<<"Valor invalido"; break;
   case 3: cout<<"Valor: ";cin>>valor; if(valor>0 && valor<=saldo) saldo-=valor; else cout<<"Saque invalido"; break;
   case 4: cout<<"Encerrando..."; break;
   default: cout<<"Opcao invalida";
  }
 }while(op!=4);
 return 0;
}