#include <iostream>
using namespace std;
int main(){
 int idade,aut,nivel;
 cout<<"Idade: ";cin>>idade;
 cout<<"Autorizacao (0/1): ";cin>>aut;
 cout<<"Nivel (1-3): ";cin>>nivel;
 if(idade<16) cout<<"Acesso negado";
 else if(idade<18){
   if(aut) cout<<"Acesso permitido com autorizacao";
   else cout<<"Acesso negado";
 }else{
   switch(nivel){
    case 1: cout<<"Acesso basico"; break;
    case 2: cout<<"Acesso intermediario"; break;
    case 3: cout<<"Acesso total"; break;
    default: cout<<"Erro: nivel invalido";
   }
 }
 return 0;
}