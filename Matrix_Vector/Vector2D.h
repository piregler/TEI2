#include"Vector.h"
#ifndef __VECTOR2D_HEADER__
#define __VECTOR2D_HEADER__
class Vector2D :  public Vector {
    public:
        Vector2D();
        Vector2D(int elem_1, int elem2);
        void addiere(Vector2D v);

};
#endif