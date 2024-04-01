#include<iostream>
#include<string.h>
using namespace std;

void getNombre (string nombre){
  for(int i=0; i<5; i++){
    cout<<nombre[i]<<endl;
  }
}

int getNumString(string text){
  return text.length();
}

int main(){
  getNombre("luan");
  cout<<"el tamanio de tu nombre es: "<<getNumString("luan");
  return 0;
}