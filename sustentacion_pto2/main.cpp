#include <iostream>
#include "videoJuego.cpp"

using namespace std;

int main(){
    int opcion;
    int intentos = 0;
    int shutdown = 0;
    string palMaquina;
    string palUsuario;
    int numMaquina;
    int numUsuario;

    cout << "Bienvenido mis juegos" << endl;
    cout << "1. Adivina la palabra" << endl;
    cout << "2. Adivina el numero" << endl;
    cout << "3. Salir" << endl;
    cin >> opcion;

    if (opcion == 1){
        adivinaPal juego1;
        palMaquina = juego1.maquinaDes(juego1.listaAnimales);
        palUsuario = juego1.userDes();
        while(shutdown == 0){
            if (juego1.adivinaPalabra(palUsuario, palMaquina) == true){
                cout << "Felicidades, has adivinado la palabra" << endl;
                shutdown = 1;
            }else{
                cout << "Intenta de nuevo" << endl;
                cout << "Intentos restantes: " << 5 - intentos << endl;
                intentos++;
                if (intentos == 5){
                    cout << "Has perdido" << endl;
                    shutdown = 1;
                    break;
                }
            }
        }
    }/*else if (opcion == 2){
        adivinaNum juego2;
        juego2.starter(juego2.listaNum);
        juego2.numMaquina();
        juego2.numUsuario();
        while(shutdown == 0){
            juego2.adivinaNumero(juego2.numUsuario(), juego2.numMaquina());
            if (juego2.adivinaNumero(juego2.numUsuario(), juego2.numMaquina()) == true){
                cout << "Felicidades, has adivinado el numero" << endl;
                shutdown = 1;
            }else{
                cout << "Intenta de nuevo" << endl;
                cout << "Intentos restantes: " << 5 - intentos << endl;
                intentos++;
                if (intentos == 5){
                    cout << "Has perdido" << endl;
                    shutdown = 1;
                    break;
                }
            }
        }
    }*/

}