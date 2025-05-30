#include <iostream>
#include <cmath>
#include <string>
#define pi 3.1416

using namespace std;

class Figura {
public:
    void ejecutarOpcion() {
        int opcion = 0;
        cout << "Ingrese la opcion a ejecutar:\n1. Calcular radio desde area\n2. Calcular perimetro\nOpcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                cout << "Usted ha seleccionado calcular el radio desde el area.\n";
                double radio;
                cout << "Introduce el radio del circulo: ";
                cin >> radio;
                double area = pi*radio*radio;
                cout << "El radio del circulo es: " << area << endl;
                break;
            }
            case 2: {
                cout << "Usted ha seleccionado calcular el perimetro.\n";
                double radio;
                cout << "Introduce el radio del circulo: ";
                cin >> radio;
                double perimetro = 2 * 3.1416 * radio;
                cout << "El perímetro del circulo es: " << perimetro << endl;
                break;
            }
            default:
                cout << "Opcion incorrecta." << endl;
        }
    }
};

int main() {
    Figura f;
    f.ejecutarOpcion();
    return 0;
}
