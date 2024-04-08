#include <iostream>
#include <list>
#include <random>

using namespace std;

// juego de adivinar una palabra
// juego de adivinar un numero 
// usuario gano el juego o perdio el juego method

class videoJuego{
    private:
    string nombreJug;
    string desarrollador;

    public:
    // constructor vacio
    videoJuego(){

    }
};

class adivinaPal : public videoJuego{ // subclase de videoJuego, juego #1 adivina palabra
    public:
    list<string> listaAnimales{"leon","jirafa","oso","tigre","elefante","perro","gato","pajaro","pez","serpiente"};
    private:
    string palabraMaquina;
    string palabraUsuario;
    
    /*
    La idea aqui es que hay varias tematicas de la cual el usuario pueda escoger, el juego
    trata de intuicion saber que palabra es la que la maquina ha escogido.
    */

   public: // getters y setters
    void setPalabraUsuario(string palabraUsuario){
        this->palabraUsuario = palabraUsuario;
    }
    string getPalabraMaquina(){
        return palabraMaquina;
    }

    string getPalabraUsuario(){
        return palabraUsuario;
    }
    void setPalabraMaquina(string palabraMaquina){
        this->palabraMaquina = palabraMaquina;
    }

    public:
    // metodos del juego
    string maquinaDes(list<string> lista){
        // aqui la maquina escoge una palabra aleatoria de la lista de palabras
        // y la retorna
        int randomP = rand() % 10; // random entre 0 y 10
        auto it = next(lista.begin(), randomP); // iterador que apunta a la palabra escogida
        string palabraMaquina = *it;
        return palabraMaquina;
    };

    string userDes(){
        cout << "Escribe una palabra: ";
        cin >> palabraUsuario;
        // aqui el usuario escribe una palabra
        // y la retorna
        return palabraUsuario;
    };

    bool adivinaPalabra(string palabraUsuario, string palabraMaquina){
        // aqui se compara la palabra que el usuario ha escrito con la palabra que la maquina ha escogido
        // si son iguales retorna true, si no son iguales retorna false
        if (palabraUsuario == palabraMaquina){
            return true;
        }else{
            return false;
        }
    };

};

class adivinaNum : public videoJuego{ // subclase de videojuego, juego #2 adivina numero
    private:
    list<int> listaNum;
    int numMaquina;
    int numUsuario;
    
    public:
    // metodos del juego

    // inicializador de la lista
    void starter(){
        for (int i = 0; i < 20; i++){
            listaNum.push_back(i);
        }; 
    };

    int generateNumMaquina(){
        int randomN = rand() % 20; // random entre 0 y 20
        auto it = next(listaNum.begin(), randomN); // iterador que apunta a la palabra escogida
        numMaquina = *it;
        return numMaquina;
    };

    int generateNumUsuario(){
        cout << "Digita un numero: ";
        cin >> numUsuario;
        return numUsuario;
    };

    bool adivinaNumero(int numUsuario, int numMaquina){
        if (numUsuario == numMaquina){
            return true;
        }else{
            return false;
        }
    };
};
