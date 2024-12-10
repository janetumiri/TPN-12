#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    void cargarDatos() {
        cout << "Ingrese el nombre: ";
        cin >> nombre;
        cout << "Ingrese la edad: ";
        cin >> edad;
    }

    void imprimirDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
    }
};

class Empleado : public Persona {
private:
    double sueldo;

public:
    void cargarSueldo() {
        cout << "Ingrese el sueldo: ";
        cin >> sueldo;
    }

    void imprimirSueldo() {
        cout << "Sueldo: " << sueldo << endl;
    }
};

int main() {
    Persona persona;
    persona.cargarDatos();
    persona.imprimirDatos();

    Empleado empleado;
    empleado.cargarDatos();
    empleado.cargarSueldo();
    empleado.imprimirDatos();
    empleado.imprimirSueldo();
    return 0;
}