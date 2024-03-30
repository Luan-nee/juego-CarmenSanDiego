class Edificio{
public:
	int width;
	int height;
	//acotar el area del edificio
	int x_origen;
	int y_origen;
	int x_final;
	int y_final;
	//acotar el area de la entrada
	int idLoza; 
	int x_origenLoza;
	int x_finalLoza;
	int y_origenLoza;
	int y_finalLoza;
	
	char loza = 219;
	static const int cantEdificios = 2;
	char nombre[10]; // <- sin uso
	unsigned char estructura[7][19] =	{
	  {46,46,201,205,205,205,205,205,205,205,205,205,205,205,205,205,187,46,46},
	  {46,201,188,46,46,46,46,46,46,46,46,46,46,46,46,46,200,187,46},
	  {201,188,46,46,66,73,66,76,73,79,84,69,67,65,46,46,46,200,187},
	  {200,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,188},
	  {46,46,186,46,46,46,46,201,205,205,205,187,46,46,46,46,186,46,46},
	  {46,46,186,46,46,46,46,186,46,46,46,186,46,46,46,46,186,46,46},
	  {46,46,200,205,205,205,205,202,205,205,205,202,205,205,205,205,188,46,46},
	};
		
	Edificio(int width,int height, int idLoza);
	void construirObj(int x, int y);
	void construirEntrada(int x, int y);
	void borrarObj();
	void borrarEntrada();
};

class Muro{
	private:
		int width;
		int height;
		char bloque = 219;
		int delayConstruir = 0;
	public:
		Muro (int width, int height);
		void dibujarMuro();
};

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

Edificio::Edificio(int width,int height, int idLoza){
	this->width = width;
	this->height = height;
	this->idLoza = idLoza;
};

void Edificio::borrarObj(){
	for(int i = this->x_origen, columna = 0; i< this->x_final; i++, columna++){ // 7
		for(int j = this->y_origen, fila = 0 ; j< this->y_final; j++, fila++){ // 19
			gotoxy(i,j);
			cout<<" ";
		}
	}
	this->borrarEntrada();
}

void Edificio::borrarEntrada(){
	for(int i = this->x_origenLoza; i < 3 + this->x_origenLoza; i++){
		for(int j = this->y_origenLoza; j < 1 + this->y_origenLoza; j++){
			gotoxy(i,j);
			cout<<" ";
		}
	}
}

void Edificio::construirObj(int x, int y){
	this->x_origen = x;
	this->x_final = this->width + x;
	this->y_origen = y;
	this->y_final = this->height + y;	
	
	// Son indices para imprimir la estructura
	// 	-columna
	// 	-fila
	for(int i = this->x_origen, columna = 0; i< this->x_final; i++, columna++){ // 7
		for(int j = this->y_origen, fila = 0 ; j< this->y_final; j++, fila++){ // 19
			gotoxy(i,j);
			cout<<this->estructura[fila][columna];
		}
	}
	// asignando cordenadas para empezar a construir la entrada (loza)
	this->construirEntrada(x+this->height+1, y+7);
} 

void Edificio::construirEntrada(int x, int y){
	this->x_origenLoza = x;
	this->x_finalLoza = 3 + x;
	this->y_origenLoza = y;
	this->y_finalLoza = 1 + y;	
	
	
	for(int i = this->x_origenLoza; i < 3 + this->x_origenLoza; i++){
		for(int j = this->y_origenLoza; j < 1 + this->y_origenLoza; j++){
			gotoxy(i,j);
			cout<<this->loza;
		}
	}
}
////////////////////////////////////////////////////////////////

Muro::Muro(int width, int height){
	this->width = width;
	this->height = height;	
}

void Muro::dibujarMuro(){
	//dibujando la parte superior
	for(int i=0; i<=this->width; i++){
		gotoxy(i,0);
		cout<< this->bloque;
		Sleep(this->delayConstruir);
	}
	//dibujando la parte inferior
	for(int i=0; i<=this->width; i++){
		gotoxy(i,this->height);
		cout<< this->bloque;
		Sleep(this->delayConstruir);
	}
	//dibujando la parte izquierda
	for(int i=0; i<= this->height; i++){
		gotoxy(0,i);
		cout<< this->bloque;
		Sleep(this->delayConstruir);
	}
	//dibujando la parte derecha
	for(int i=0; i<= this->height; i++){
		gotoxy(this->width, i);
		cout<< this->bloque;
		Sleep(this->delayConstruir);
	}
}

class CrearJugador{
public:
	int x = 1;
	int y = 1;
	int old_x = 1;
	int old_y = 1;
	int localizacion = 0;
	char skin = 145;
	char tecla;
	void retrocederPaseAnterior();
	void modificarPosition(char boton);
	void dibujar();
};

class NPC{
	string dialogo;
	string nombre;
	string oficio = "no tengo oficio"; // por defecto
	char skin;
	int edad;
	bool genero; // true = varon, false = mujer
	void conversar();
	void mostrarSuInformacion();
};

void CrearJugador::dibujar(){
	gotoxy(this->old_x, this->old_y);
	cout<<" ";
	gotoxy(this->x, this->y);
	cout<<this->skin;	
}

void CrearJugador::modificarPosition(char boton){
	this->old_x = this->x;
	this->old_y = this->y;
	
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
}

void CrearJugador::retrocederPaseAnterior(){
	this->x = this->old_x;
	this->y = this->old_y;
	
	gotoxy(this->old_x,this->old_y);
	cout<<this->skin;
}