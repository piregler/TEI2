#include <iostream>
#include "Matrix.h"
#include"Vector.h"
#include"Vector2D.h"

using namespace std;

int main(int, char**) {
    Matrix m;
    m.ausgabe();
    // Vector vec;
    // cout << vec.betrag() << "\n";
    // Vector2D o (3,3);
    // Vector2D v (2,2);
    // o.addiere(v);
    // o.ausgabe();

    cout << "Testprogramm" << endl;
    Vector2D a (3,1);
    Vector2D b (1,2);
    Vector2D c;
    c.addiere(a);
    // c.ausgabe();
    b.addiere(c);
    // b.ausgabe();
    cout << b.betrag() << "\n";
}
