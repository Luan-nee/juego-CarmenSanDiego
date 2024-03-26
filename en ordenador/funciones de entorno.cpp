void coordenandas(int ,int);
bool sobreCasa(int , int , edificio [], int);

bool sobreCasa (int x, int y, edificio estructura[3], int numEdificios){
	for(int i = 0; i < numEdificios; i++){
		if(x <= estructura[i].x_final-1 &&  x >= estructura[i].x_origen && y <= estructura[i].y_final-1 &&  y >=estructura[i].y_origen){
			return true;
		}
	}
	return false;
}

void coordenandas(int x,int y){
    gotoxy(100, 2);cout<<x<<"/"<<y;
}

void gotoxy(int x, int y){
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}


