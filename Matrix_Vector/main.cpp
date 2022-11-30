#include <iostream>
#include "Matrix.h"
#include"Vector.h"
#include"Vector2D.h"

// Erwartet wurden 4 Dekonstruktor Aufrufe
// Tatsächlich sind es 6 Stück
// liegt vermutlich daran das bei den aufrufen der Addiere Funktion,
// die Objekte nicht als Referenz übergeben werden

using namespace std;

int main(int, char**) {
    Matrix m;
    m.ausgabe();

    cout << "Testprogramm" << endl;
    // cout << "Vektor2D a" << endl;
    Vector2D a (3,1);
    // cout << "Vektor2D b" << endl;
    Vector2D b (1,2);
    // cout << "Vektor2D c" << endl;
    Vector2D c;

    // cout << "Vektor2D w" << endl;
    Vector2D* w = new Vector2D;
    cout << "Vektor2D z" << endl;
    Vector2D* z = new Vector2D (-3,1);

    c.addiere(a);
    // c.ausgabe();
    b.addiere(c);
    // b.ausgabe();
    cout << "Betrag Vektor b: ";
    cout << b.betrag() << "\n";
    a.addiere(*z);
    cout << "Ausgabe Vektor2D a" << endl;
    a.ausgabe();

    w->addiere(*z);
    cout << "Ausgabe Vektor2D w:" << endl;
    w->ausgabe();
    w->addiere(b);
    cout << "Ausgabe Vektor2D w:" << endl;
    w->ausgabe();
    cout << "Vektor2D u" << endl;
    Vector2D u (1,2);


    u.kopiereIn(w);
    cout << "Ausgabe Vektor2D w" << endl;
    w->ausgabe();
    u.kopiereIn(&a);
    cout << "Ausgabe Vektor2D a" << endl;
    a.ausgabe();
// Aufgabe 4
    cout << "Ausgabe Vektor2D z" << endl;
    z->ausgabe();
    tausche(z, &a);
    cout << "Ausgabe Vektor2D a" << endl;
    a.ausgabe();
    cout << "Ausgabe Vektor2D z" << endl;
    z->ausgabe();
}
