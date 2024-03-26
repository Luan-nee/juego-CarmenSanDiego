#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

void gotoxy(int , int);

#include "clases de entorno.cpp"
#include "metodos definidos.cpp"
#include "funciones de entorno.cpp"

muro paredes(165,42);
CrearJugador detective;

edificio bibliotecas[3] = {
	edificio(19, 7),
  edificio(19, 7),
  edificio(19, 7)
};

/////////////////////////////////////////////
int main(){
 	paredes.dibujarMuro();
 	
	bibliotecas[0].construirObj(1,10);
	bibliotecas[1].construirObj(30,10);
	bibliotecas[2].construirObj(60,10);

  do{
  	coordenandas(detective.x,detective.y);
    if(kbhit()){
      detective.tecla = getch();
      if(detective.tecla == 'e' || detective.tecla == 'E'){	
//				biblioteca.construirObj(detective.x, detective.y);
      }else{
      	if(sobreCasa(detective.x,detective.y,bibliotecas,3)){
      		detective.retrocederPaseAnterior();
				}else{
      		detective.mover_player(detective.tecla);
				}
			}
    }
  }while(true);
  return 0;
}
////////////////////////////////////////////
