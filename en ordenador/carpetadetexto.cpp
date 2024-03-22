#include<iostream>
#include<conio.h>
#include<fstream> // para crear y leer archivos
using namespace std;

class baseDeDatos{
    private:
    public:
    baseDeDatos(ofstream archivo, string nombre_archivo);
    void guardar(string texto);
    void eliminar_datos(string texto);
    void eliminar_archivo();
    void cambiar(string texto_nuevo, string texto_antiguo);
    void buscar(string texto_buscar);
    // protected:
};

int main(){
    return 0;
}

baseDeDatos::baseDeDatos(ofstream &archivo, string nombre_archivo){

    //abriendo archivos
    archivo.open( nombre_archivo.c_str() , ios::out );
    if(archivo.fail()){
        cout<<"SUCCEDIÓ UN ERROR EN EL PROGRAMA, ACTUALMENTE ESTÁ EN PAUSA....";
        getch();
    }
};

baseDeDatos::guardar(string texto){
    archivo << texto;
}


