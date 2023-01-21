#include"Matrix.h"
#include <iostream>
using namespace std;

int Matrix::counter = 0;
Matrix::Matrix() 
        : m_Zeilen (2), m_Spalten (1) // m_Element{420, 420}
    {
        m_Element[0] = 2;
        m_Element[1] = 2;
        cout << "Standardkonstruktor von Matrix wurde aufgerufen \n";
        counter++;
    }

void Matrix::ausgabe(){
    for (int k = 0; k < m_Spalten; k++){
        for (int i = 0; i < m_Zeilen; i++){
            cout << m_Element[i] << "\n";
        }
        cout << endl;
    }
}
    // AB6.1 Dekonstruktor Matrix 
    // wird automatisch für Objekte auf dem Stack aufgerufen und dient zum auflösen des Objekts und wiederfreigeben des Speichers
    // das was in Java der garbage collector tut 
    Matrix::~Matrix() {     
        cout << "Matrix" << endl;
        ausgabe();
        cout << "wird zerstört" << endl << endl;
        counter--;
    }

     int Matrix::getCounter(){
        return counter;
    }


    