#include"Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix() 
        : m_Zeilen (2), m_Spalten (1)
    {
        m_Element[0] = 2;
        m_Element[1] = 2;
        cout << "Standardkonstruktor von Matrix wurde aufgerufen \n";
    }

void Matrix::ausgabe(){
    for (int k = 0; k < m_Spalten; k++){
        for (int i = 0; i < m_Zeilen; i++){
            cout << m_Element[i] << "\n";
        }
    }
}

    Matrix::~Matrix() {
    }
    