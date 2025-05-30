#include <iostream>
#include <cmath>     // Para pow()
#include <iomanip>   // Para fixed y setprecision

using namespace std;

int main() {
    double capital_inicial = 15000.0;
    double tasa_mensual = 0.037;
    int anios = 15;
    int meses = anios * 12;
    double monto_final;

    // C�lculo del inter�s compuesto
    monto_final = capital_inicial * pow(1 + tasa_mensual, meses);

    // Formato bonito para salida: sin notaci�n cient�fica
    cout << fixed << setprecision(2);
    cout << "Monto ahorrado despues de " << anios << " a�os: $" << monto_final << endl;

    return 0;
}

