//Estructura if-else
#include <iostream> //directiva, biblioteca de datos de entrada y salida

using namespace std;

int main (void){ // funcion principal
    string malo = "Kraveh te tiene en tu lista de presas"; //declarar variable y su texto
    string animal = "Kraveh te protegera";
    string persona = "Kraveh te ha saludado";
    int id = 0;


    cout << "Que eres?" << endl; //mostrar al usuario un mensaje para saber quien es.
    cout << "1 eres malo\n"; //se le mostrara al usuario las opciones disponibles, y tiene que elegir un numero para saber quien es
    cout<< "2 eres animal\n";
    cout << "3 eres persona\n";
    cin >> id; // pide al usuario el dato para saber que tipo de de animal o persona es


    if (id == 1) //verificar si el usuario elegio 1
    {

        //si es 1, el usuario es malo, entonces se mostrara el siguiente mensaje
        cout << malo << endl;

    }else if(id == 2){

        //si es 2, el usuario es animal, entonces se mostrara el siguiente mensaje
        cout << animal << endl;

    }
    else{

        //si no el usuario no eligio 1, ni 2, entonces elegio 3
        //si es 3, el usuario es una persona
        cout << persona << endl;

    }
    
    return 0;
}