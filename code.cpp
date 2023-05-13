#include <iostream>

using namespace std;

int main () {

    float distancia = 150;
    float tiempo = 3;

    float velocidad = distancia / tiempo;

    cout << "La velocidad fue " << velocidad << " km/h" << endl;

    if (velocidad < 100) {
        cout << "Velocidad adecuada ";
    }
    
}