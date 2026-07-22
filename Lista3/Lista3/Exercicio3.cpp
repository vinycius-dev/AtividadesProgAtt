#include <iostream>
using namespace std;
int main(){
 int n,soma=0;
 cout<<"Digite um numero: ";
 cin>>n;
 for(int i=1;i<n;i++){
   if(n%i==0){
     soma+=i;
     if(soma>n) break;
   }
 }
 if(soma==n) cout<<"Numero perfeito";
 else cout<<"Nao e perfeito";
 return 0;
}