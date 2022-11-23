#ifndef __MATRIX_HEADER__
#define __MATRIX_HEADER__

class Matrix{
protected: 
    int m_Zeilen;
    int m_Spalten;
    float m_Element[2];

public:
    Matrix(); 
    ~Matrix();
    void ausgabe();
};

#endif /*____MATRIX_HEADER__*/