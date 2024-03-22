// comprobar si el jugador está en el área de un cuadrado
void sobreCuadrado(int &, int &, int ,int , edificio);
// captura de boton pulsado
void mover_player(char, int &, int &);
/* 
	agrega una placa en donde se verifica si el jugador está encima:
 	si es true se imprime un aviso 'está encima' es una exquina de la consola
 	si es false entonces no pasa nada
*/
void agregarPlaca(int x, int y, int width, int height);
// mostrar la posición del jugador
void coordenandas(int, int);
// construye una estructura (casa | edificio | etc...)
void construirEstructura(int, int, int, int, edificio &);
////////////////////////////////////////////////////////////////////
void agregarPlaca(int x, int y, int width, int height){
	
}


void mover_player(char boton, int &x,int &y){
	int old_x = x;
	int old_y = y;
	
  switch (boton){
  case 'w':
  case 'W':
    y--;
    break;
  case 's':
  case 'S':
    y++;
    break;
  case 'a':
  case 'A':
    x--;
    break;
  case 'd':
  case 'D':
    x++;
    break;
  }
  
  /*
		Comprobando si el jugador 
  	está sobre una estructura
  	que no puedo pasar
  */
  sobreCuadrado(x, y, old_x, old_y, biblioteca);
}

void coordenandas(int x,int y){
    gotoxy(100, 2);cout<<x<<"/"<<y;
}

void sobreCuadrado(int &x, int &y,int viejo_x, int viejo_y, edificio tienda){
	if(x <= tienda.x_final-1 &&  x>=tienda.x_origen && y<=tienda.y_final-1 &&  y>=tienda.y_origen){
		x = viejo_x; 
  	y = viejo_y;
	}else{
	  //limpiando el rastro anterior
	  gotoxy(viejo_x, viejo_y);
	  cout<<" ";
	}
		gotoxy(x,y);
		cout<<detective.skin;
}

void gotoxy(int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}


