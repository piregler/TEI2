#include "Vector.h"
#ifndef __VECTOR2D_HEADER__
#define __VECTOR2D_HEADER__
class Vector2D :  public Vector {
    public:
        Vector2D();
        Vector2D(int elem_1, int elem2);
        void addiere(Vector2D v);
        // AB 6.3
        // Funktionsprototyp von der  Funktion kopiereIn
        void kopiereIn(Vector2D *zielvar);
        void ausgabe();

};

// AB 6.4
// Funktionsprototyp von der Globalen Funktion tausche
void tausche(Vector2D* a, Vector2D* b);
#endif