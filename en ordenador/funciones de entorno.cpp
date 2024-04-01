bool sobreCasa(int , int , Edificio []);
void coordenandas(int ,int);
int getIdCasa(CrearJugador, Edificio []);
void mostrarIdEntrada(CrearJugador, Edificio []);
void mostrarNumeroEnUnaEsquina(int);

void mostrarNumeroEnUnaEsquina(int numero){
	gotoxy(146,4);
	cout<<"localizacion: "<<numero;
}

char unStringAChar(string letra){
	char newTexto[1];
	strcpy(newTexto, letra.c_str());
	return newTexto[0];
}	

void mostrarIdEntrada(CrearJugador player, Edificio estructura[3]){
	gotoxy(146,5);
	cout<<"id loza: "<<getIdCasa(player, estructura);
}

int getIdCasa(CrearJugador player, Edificio estructura[]){
	for(int i = 0; i < estructura[0].cantEdificios; i++){
		if(player.x <= estructura[i].x_finalLoza-1 &&  player.x >= estructura[i].x_origenLoza && player.y <= estructura[i].y_finalLoza-1 && player.y >=estructura[i].y_origenLoza){
			return estructura[i].idLoza;
		}
	}
	return 0;
}

bool sobreCasa (int x, int y, Edificio estructura[]){
	for(int i = 0; i < estructura[0].cantEdificios; i++){
		if(x <= estructura[i].x_final-1 &&  x >= estructura[i].x_origen && y <= estructura[i].y_final-1 &&  y >=estructura[i].y_origen){
			return true;
		}
	}
	return false;
}

void coordenandas(int x,int y){
    gotoxy(146, 2);
		cout<<"   /  ";
		cout<<x<<"/"<<y;
}

void gotoxy(int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}


