#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string.h>
using namespace std;

void gotoxy(int , int);
char unStringAChar(string);

#include "clases de entorno.cpp"
#include "funciones de entorno.cpp"

/*
	El tamaño más grande de los nombre es de 13 caracteres
*/

Edificio casaMapa1[Edificio::cantEdificios] = {
  Edificio(19, 7, 1, "-------------x------------"),
  Edificio(19, 7, 2, "   libreria               "),
  Edificio(19, 7, 3, " restaurante    el chino  "),
  Edificio(19, 7, 4, "    campo       deportivo "),
  Edificio(19, 7, 5, "   Parque       nacional  "),
  Edificio(19, 7, 6, " Restaurante    la baina  "),
  Edificio(19, 7, 7, " museo inter-   nacional  ")
};

Muro paredes(165,42);
CrearJugador detective;

//variable de prueva 
//bool posibilidadDibujar1 = true;
//bool posibilidadDibujar2 = true;
/////////////////////////////////////////////
int main(){
 	paredes.dibujarMuro();
 	detective.dibujar();
 	
 	casaMapa1[0].construirObj(25,2);
	casaMapa1[1].construirObj(46,2);
	casaMapa1[2].construirObj(66,2);
	casaMapa1[3].construirObj(87,2);
	casaMapa1[4].construirObj(25,20);
	casaMapa1[5].construirObj(45,20);
	casaMapa1[6].construirObj(87,20);
		
  do{
    if(kbhit()){
      detective.tecla = getch();
  		detective.modificarPosition(detective.tecla);
  		
  		if(sobreCasa(detective.x, detective.y, casaMapa1)){
  			detective.retrocederPaseAnterior();
			}
  		
  		if(getIdCasa(detective,casaMapa1) > 0){
  			detective.localizacion = getIdCasa(detective, casaMapa1);
			}
			
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
			mostrarIdEntrada(detective, casaMapa1);	
			mostrarNumeroEnUnaEsquina(detective.localizacion);
    }
  }while(true);
  return 0;
}
////////////////////////////////////////////
