#include"Vector.h"
#include"Matrix.h"
#include <math.h>
#include <iostream>

using namespace std;


double Vector::betrag(){
    return sqrt(pow(m_Element[0], 2)+ pow(m_Element[1], 2));


}

