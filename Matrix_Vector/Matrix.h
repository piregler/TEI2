#ifndef __MATRIX_HEADER__
#define __MATRIX_HEADER__

class Matrix{
private:
    static int counter;
protected: 
    int m_Zeilen;
    int m_Spalten;
    float m_Element[2];

public:
    Matrix(); 
    ~Matrix();
    static int getCounter();
    virtual void ausgabe();
};
#endif /*____MATRIX_HEADER__*/