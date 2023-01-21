#include <iostream>
#include "Matrix.h"
#include"Vector.h"
#include"Vector2D.h"

// Erwartet wurden 4 Dekonstruktor Aufrufe
// Tatsächlich sind es 6 Stück
// liegt vermutlich daran das bei den aufrufen der Addiere Funktion,
// die Objekte nicht als Referenz übergeben werden, d.h. es wird beim aufruf der Funktion jedesmal ein Objekt angelegt und nach beenden der Funktion wieder freigegeben 

using namespace std;

int main(int, char**) {
    Matrix m;
    m.ausgabe();

    cout << "Testprogramm" << endl;
    // das ist von AB 5
    // cout << "Vektor2D a" << endl;
    Vector2D a (3,1);
    // cout << "Vektor2D b" << endl;
    Vector2D b (1,2);
    // cout << "Vektor2D c" << endl;
    Vector2D c;

    // cout << "Vektor2D w" << endl;
    
    // AB 6.2
    // hier werden die beiden Vektoren w und z auf dem Heap angelegt
    // new keywort legt objekte auf dem Heap an
    // Objekte auf dem heap werden nicht  unbedingt automatisch freigegeben, hierzu müsste manuell die delete function zum aufruf des deconstructors verwendet werden 
    Vector2D* w = new Vector2D;
    cout << "Vektor2D z" << endl;
    Vector2D* z = new Vector2D (-3,1);

    // Auch von AB5
    c.addiere(a);
    // c.ausgabe();
    b.addiere(c);
    // b.ausgabe();
    cout << "Betrag Vektor b: ";
    cout << b.betrag() << "\n";

    // AB 6.2 addiere z zu a
    // z ist ein Pointer, deshalb derefenzerieren 
    a.addiere(*z);
    cout << "Ausgabe Vektor2D a" << endl;
    // a wird ausgegeben siehe, Matrix.cpp Methode Ausgabe
    a.ausgabe();
    // Achtung pointer notation verwenden "->"
    w->addiere(*z);
    cout << "Ausgabe Vektor2D w:" << endl;
    w->ausgabe();
    w->addiere(b);
    cout << "Ausgabe Vektor2D w:" << endl;
    w->ausgabe();
    cout << "Vektor2D u" << endl;

    // AB 6.3 
    // hier wird u auf dem stack angelegt
    Vector2D u (1,2);
    // aufruf kopiere Funktion mit u, w liegt auf dem  heap, daher ist w schon ein Pointer /Speicheradresse) 
    u.kopiereIn(w);
    cout << "Ausgabe Vektor2D w" << endl;
    w->ausgabe();
    // aufruf der kopiere Funktion mit a als Argument, daher, Speicheradresse von A verwenden, "&" Notation
    u.kopiereIn(&a);
    cout << "Ausgabe Vektor2D a" << endl;
    a.ausgabe();
    
    // AB 6.4
    // Test der globalen swap Funktion in Vektor2D.cpp
    cout << "Ausgabe Vektor2D z" << endl;
    z->ausgabe();
    tausche(z, &a);
    cout << "Ausgabe Vektor2D a" << endl;
    a.ausgabe();
    cout << "Ausgabe Vektor2D z" << endl;
    z->ausgabe();
}
