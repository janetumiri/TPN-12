#include <iostream>
using namespace std;

class Punto {
private:
    int x;
    int y;

public:
    Punto() {
        x = 0;
        y = 0;
    }
    Punto(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void imprimir() {
        cout << "x: " << x << ", y: " << y << endl;
    }
};

int main() {
    Punto punto1;
    Punto punto2(5, 10);

    punto1.imprimir();
    punto2.imprimir();

    return 0;
}