#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;

void gotoxy(int , int);

#include "clases de entorno.cpp"
#include "funciones de entorno.cpp"

Edificio bibliotecas[Edificio::cantEdificios] = {
	Edificio(19, 7, 1),
  Edificio(19, 7, 2)
};
Edificio tiendas[Edificio::cantEdificios] = {
	Edificio(19, 7, 3),
  Edificio(19, 7, 4)
};

Muro paredes(165,42);
CrearJugador detective;

//variable de prueva 
bool posibilidadDibujar1 = true;
bool posibilidadDibujar2 = true;
/////////////////////////////////////////////
int main(){
 	paredes.dibujarMuro();
 	detective.dibujar();		
 	bibliotecas[0].construirObj(5,5);
	bibliotecas[1].construirObj(25,5);
	
  do{
    if(kbhit()){
      detective.tecla = getch();
  		detective.modificarPosition(detective.tecla);
  	
			/*
			switch(detective.localizacion){
				case 1:
				case 2:
					if(sobreCasa(detective.x, detective.y, tiendas)){
						detective.retrocederPaseAnterior();
					}
					if(posibilidadDibujar2){
						system("cls");
						paredes.dibujarMuro();
						tiendas[0].construirObj(5,15);
						tiendas[1].construirObj(25,15);
						posibilidadDibujar2 = false;
					}
					if(getIdCasa(detective, tiendas) > 0){
						detective.localizacion = getIdCasa(detective, tiendas);
					}
					posibilidadDibujar1 = true;
					break;
					
				case 3:
				case 4:
					//dibujar personas que tengan su propio dialogo después de 
					//haber entrado a la casas con id = 3 o id = 4;
					if(sobreCasa(detective.x, detective.y, bibliotecas)){
						detective.retrocederPaseAnterior();
					}
					if(getIdCasa(detective, bibliotecas) > 0){
						detective.localizacion = getIdCasa(detective, bibliotecas);
					}
					if(posibilidadDibujar1){
						system("cls");
						paredes.dibujarMuro();
						bibliotecas[0].construirObj(5,5);
						bibliotecas[1].construirObj(25,5);
						posibilidadDibujar1 = false;
					}
					posibilidadDibujar2 = true;
					break;
					
				default:// cuando detective.localizacion == 0
					if(sobreCasa(detective.x, detective.y, bibliotecas)){
						detective.retrocederPaseAnterior();
					}
					if(getIdCasa(detective, bibliotecas) > 0){
						detective.localizacion = getIdCasa(detective, bibliotecas);
					}
					if(posibilidadDibujar1){
						system("cls");
						paredes.dibujarMuro();
						//dibujar todas las casas posibles dentro del mapa
						bibliotecas[0].construirObj(5,5);
						bibliotecas[1].construirObj(25,5);
						
						posibilidadDibujar1 = false;
					}
			}	
			*/
			
			detective.dibujar();	
			coordenandas(detective.x,detective.y);
			mostrarIdEntrada(detective, bibliotecas);	
    }
  }while(true);
  return 0;
}
////////////////////////////////////////////
