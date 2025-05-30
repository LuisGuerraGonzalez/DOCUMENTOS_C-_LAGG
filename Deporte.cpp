#include <iostream>
#include <string>

using namespace std;

// Clase base
class Deporte {
protected:
    string nombre;
    string tipoBalon;
    int numeroJugadores;

public:
    // Constructor
    Deporte(string nombre, string tipoBalon, int numeroJugadores)
        : nombre(nombre), tipoBalon(tipoBalon), numeroJugadores(numeroJugadores) {}

    // Método 1
    void mostrarInformacion() {
        cout << "Nombre del deporte: " << nombre << endl;
        cout << "Tipo de balon: " << tipoBalon << endl;
        cout << "Numero de jugadores por equipo: " << numeroJugadores << endl;
    }

    // Método 2 - virtual para especializar
    virtual void tipoCuerpo() = 0;

    // Método 3
    void esDeEquipo() {
        if (numeroJugadores > 1)
            cout << "Es un deporte de equipo." << endl;
        else
            cout << "Es un deporte individual." << endl;
    }
};

// Clase derivada para deportes que se juegan con los pies
class ConPies : public Deporte {
public:
    ConPies() : Deporte("Futbol Soccer", "Balon redondo", 11) {}

    void tipoCuerpo() override {
        cout << "Este deporte se juega principalmente con los pies." << endl;
    }
};

int main() {
    ConPies futbol;

    futbol.mostrarInformacion();  // Método 1
    futbol.tipoCuerpo();          // Método 2 (especializado)
    futbol.esDeEquipo();          // Método 3

    return 0;
}

