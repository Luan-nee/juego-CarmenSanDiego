 ////////////////////////////////////////////////////////////////////////

edificio::edificio(int width,int height){
	this->width = width;
	this->height = height;
};

void edificio::construirObj(int x, int y){
	this->cantEdificios++;
	this->x_origen = x;
	this->x_final = this->width + x;
	this->y_origen = y;
	this->y_final = this->height + y;	
	
	// Son indices para imprimir la estructura
	// 	-columna
	// 	-fila
	for(int i = x, columna = 0; i< this->x_final; i++, columna++){ // 7
		for(int j = y, fila = 0 ; j< this->y_final; j++, fila++){ // 19
			gotoxy(i,j);
			cout<<this->estructura[fila][columna];
		}
	}
	this->construirEntrada(x+this->height, y + 7);
} 

void edificio::construirEntrada(int x, int y){
	char lozas = 219;  
		for(int i = x; i < 5 + x; i++){
			for(int j = y; j < 2 + y; j++){
				gotoxy(i,j);
				cout<<lozas;
			}
		}
}
////////////////////////////////////////////////////////////////

muro::muro(int width, int height){
	this->width = width;
	this->height = height;	
}

void muro::dibujarMuro(){
	//dibujando la parte superior
	for(int i=0; i<=this->width; i++){
		gotoxy(i,0);
		cout<< this->bloque;
	}
	//dibujando la parte inferior
	for(int i=0; i<=this->width; i++){
		gotoxy(i,this->height);
		cout<< this->bloque;
	}
	//dibujando la parte izquierda
	for(int i=0; i<= this->height; i++){
		gotoxy(0,i);
		cout<< this->bloque;
	}
	//dibujando la parte derecha
	for(int i=0; i<= this->height; i++){
		gotoxy(this->width, i);
		cout<< this->bloque;
	}
}

class CrearJugador{
public:
	int x = 1;
	int y = 1;
	char skin = 145;
	char tecla;
	void mover_player(char boton);
};

void CrearJugador::mover_player(char boton){
	int old_x = this->x;
	int old_y = this->y;
	
  switch (boton){
  case 'w':
  case 'W':
    this->y--;
    break;
  case 's':
  case 'S':
    this->y++;
    break;
  case 'a':
  case 'A':
    this->x--;
    break;
  case 'd':
  case 'D':
    this->x++;
    break;
  }
  
	gotoxy(old_x, old_y);
	cout<<" ";
	gotoxy(this->x, this->y);
	cout<<this->skin;
  
}