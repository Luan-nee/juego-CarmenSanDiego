#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

// coordendas x,y;
void gotoxy(int,int);	
#include "variables de entorno.cpp"
edificio biblioteca(19, 7); 
muro paredes(165,42);
create_player detective;
#include "funciones de entorno.cpp"

/////////////////////////////////////////////
int main(){
 	paredes.dibujarMuro();
  do{
  	coordenandas(detective.x,detective.y);
    if(kbhit()){
      detective.tecla = getch();
      if(detective.tecla == 'e' || detective.tecla == 'E'){	
				biblioteca.construirObj(detective.x, detective.y);
      }else{
      	mover_player(detective.tecla, detective.x, detective.y);
			}
    }
  }while(true);
  return 0;
}
////////////////////////////////////////////
