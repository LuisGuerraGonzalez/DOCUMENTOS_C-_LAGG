#include <iostream>
using namespace std;

// Clase base abstracta
class Animal {
protected:
    string nombre;
    string tipo;
    string alimentacion;
    string habitat;

public:
    // Constructor
    Animal(string nom, string tip, string ali, string hab) {
        nombre = nom;
        tipo = tip;
        alimentacion = ali;
        habitat = hab;
    }

    // Método virtual puro
    virtual void mostrarCaracteristicas() = 0;

    // Método para mostrar atributos comunes
    void mostrarDatosGenerales() {
        cout << "Nombre: " << nombre << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Alimentacion: " << alimentacion << endl;
        cout << "Habitat: " << habitat << endl;
    }

    // Destructor virtual
    virtual ~Animal() {}
};

// Mamífero
class Mamifero : public Animal {
public:
    Mamifero() : Animal("Gato", "Mamifero", "Carnivoro", "Domestico / Bosques") {}

    void mostrarCaracteristicas() {
        cout << "\nUsted ha seleccionado Mamifero.\n";
        mostrarDatosGenerales();
        cout << "Caracteristicas: Vertebrado, sangre caliente, con pelaje y glandulas mamarias.\n";
    }
};

// Ovíparo
class Oviparo : public Animal {
public:
    Oviparo() : Animal("Gallina", "Oviparo", "Omnivoro", "Granja / Campo") {}

    void mostrarCaracteristicas() {
        cout << "\nUsted ha seleccionado Oviparo.\n";
        mostrarDatosGenerales();
        cout << "Caracteristicas: Pone huevos, no amamanta a sus crias.\n";
    }
};

// Anfibio
class Anfibio : public Animal {
public:
    Anfibio() : Animal("Salamandra", "Anfibio", "Insectivoro", "Ambientes humedos") {}

    void mostrarCaracteristicas() {
        cout << "\nUsted ha seleccionado Anfibio.\n";
        mostrarDatosGenerales();
        cout << "Caracteristicas: Piel humeda, respira por la piel, puede vivir en agua y tierra.\n";
    }
};

// Vertebrado
class Vertebrado : public Animal {
public:
    Vertebrado() : Animal("Tiburon", "Vertebrado", "Carnivoro", "Oceano") {}

    void mostrarCaracteristicas() {
        cout << "\nUsted ha seleccionado Vertebrado.\n";
        mostrarDatosGenerales();
        cout << "Caracteristicas: Tiene columna vertebral, sistema nervioso desarrollado.\n";
    }
};

// Invertebrado
class Invertebrado : public Animal {
public:
    Invertebrado() : Animal("Estrella de mar", "Invertebrado", "Carnivoro", "Fondo marino") {}

    void mostrarCaracteristicas() {
        cout << "\nUsted ha seleccionado Invertebrado.\n";
        mostrarDatosGenerales();
        cout << "Caracteristicas: No tiene columna vertebral, cuerpo blando o con exoesqueleto.\n";
    }
};

// Función principal de lógica
void ejecutarOpcion() {
    int opcion;
    Animal* animal = NULL;

    cout << "Seleccione el tipo de animal:\n";
    cout << "1. Mamifero\n";
    cout << "2. Oviparo\n";
    cout << "3. Anfibio\n";
    cout << "4. Vertebrado\n";
    cout << "5. Invertebrado\n";
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            animal = new Mamifero();
            break;
        case 2:
            animal = new Oviparo();
            break;
        case 3:
            animal = new Anfibio();
            break;
        case 4:
            animal = new Vertebrado();
            break;
        case 5:
            animal = new Invertebrado();
            break;
        default:
            cout << "Opcion no valida.\n";
            return;
    }

    animal->mostrarCaracteristicas();
    delete animal;
}

// Función principal
int main() {
    ejecutarOpcion();
    return 0;
}

