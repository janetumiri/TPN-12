#include <iostream>
using namespace std;

class VectorDatos {
private:
    int datos[5];

public:
    VectorDatos() {
        cout << "Ingrese 5 datos: " << endl;
        for (int i = 0; i < 5; i++) {
            cin >> datos[i];
        }
    }
    void imprimir() {
        cout << "Vector completo: ";
        for (int i = 0; i < 5; i++) {
            cout << datos[i] << " ";
        }
        cout << endl;
    }

    void imprimir(int hasta) {
        cout << "Vector hasta " << hasta << ": ";
        for (int i = 0; i <= hasta; i++) {
            cout << datos[i] << " ";
        }
        cout << endl;
    }

    void imprimir(int desde, int hasta) {
        cout << "Vector desde " << desde << " hasta " << hasta << ": ";
        for (int i = desde; i <= hasta; i++) {
            cout << datos[i] << " ";
        }
        cout << endl;
    }
    void verificarMayoriaEdad(int edad) {
        if (edad >= 18) {
            cout << "Mayor de edad" << endl;
        } else {
            cout << "Menor de edad" << endl;
        }
    }
};

int main() {
    VectorDatos vec;
    vec.imprimir();
    vec.imprimir(2);
    vec.imprimir(1, 3);
    vec.verificarMayoriaEdad(20);

    return 0;
}