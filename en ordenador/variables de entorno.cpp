 

/*
cuidades,paises{china}

MAPA 1{
	3 estructuras
	1 o 2 personajes dentro de cada estructura
}

CARMEN SAN DIEGO{
	cabello: rojo, blaco, negro, 
	estatura: 1.50m a 1.8m
}

PERSONAS SOSPECHOSAS{
	id: 1 al 10,
	cantidad: 4 a 7,
	persona 1: 
		pista: "texto ",
}
*/

class edificio{
	public:
		int width;
		int height;
		int x_origen;
		int y_origen;
		int x_final;
		int y_final;
		int cantEdificios = 0;
		char nombre[10];
		unsigned char estructura[7][19] =	{
			  {46,46,201,205,205,205,205,205,205,205,205,205,205,205,205,205,187,46,46},  
			  {46,201,188,46,46,46,46,46,46,46,46,46,46,46,46,46,200,187,46},
			  {201,188,46,46,66,73,66,76,73,79,84,69,67,65,46,46,46,200,187},
			  {200,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,188},
			  {46,46,186,46,46,46,46,201,205,205,205,187,46,46,46,46,186,46,46},
			  {46,46,186,46,46,46,46,186,46,46,46,186,46,46,46,46,186,46,46},
			  {46,46,200,205,205,205,205,202,205,205,205,202,205,205,205,205,188,46,46},
			};
			
		edificio(int width,int height, char nombre[10] = {}){
			this->width = width;
			this->height = height;
		};
		void construirObj(int x, int y){
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
		
		void construirEntrada(int x, int y){
			char lozas = 219;  
			for(int i = x; i < 5 + x; i++){
				for(int j = y; j < 2 + y; j++){
					gotoxy(i,j);
					cout<<lozas;
				}
			}
		}
};

class muro{
	private:
		int width;
		int height;
	public:
		muro ( int width, int height){
			this->width = width;
			this->height = height;
		}
		void dibujarMuro(){
			//dibujando la parte superior
			for(int i=0; i<=this->width; i++){
				gotoxy(i,0);
				cout<<8;
			}
			//dibujando la parte inferior
			for(int i=0; i<=this->width; i++){
				gotoxy(i,this->height);
				cout<<8;
			}
			//dibujando la parte izquierda
			for(int i=0; i<= this->height; i++){
				gotoxy(0,i);
				cout<<8;
			}
			//dibujando la parte derecha
			for(int i=0; i<= this->height; i++){
				gotoxy(this->width, i);
				cout<<8;
			}
		}
};

struct create_player {
	int x = 1;
	int y = 1;
	char skin = 145;
	char tecla;
};

//unsigned char estructura[7][19] = 
//{
//  {46,46,201,205,205,205,205,205,205,205,205,205,205,205,205,205,187,46,46},  
//  {46,201,188,46,46,46,46,46,46,46,46,46,46,46,46,46,200,187,46},
//  {201,188,46,46,66,73,66,76,73,79,84,69,67,65,46,46,46,200,187},
//  {200,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,203,205,188},
//  {46,46,186,46,46,46,46,201,205,205,205,187,46,46,46,46,186,46,46},
//  {46,46,186,46,46,46,46,186,46,46,46,186,46,46,46,46,186,46,46},
//  {46,46,200,205,205,205,205,202,205,205,205,202,205,205,205,205,188,46,46},
//};