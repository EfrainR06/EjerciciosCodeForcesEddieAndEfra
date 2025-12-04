#include <iostream>
using namespace std;

void eliminar_jugadores(int &jugadores, int tarjetasAmarillas, int tarjetasRojas) {

    jugadores = min(jugadores, tarjetasRojas + tarjetasAmarillas / 2);
}

int main(){

    int rondas;
    cin >> rondas;

    while (rondas--) {

        int jugadores, amarillas, rojas;

        cin >> jugadores;
        cin >> amarillas >> rojas;

        eliminar_jugadores(jugadores, amarillas, rojas);

        cout << jugadores << endl;
    }

    return 0;
}
