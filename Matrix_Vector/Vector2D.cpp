#include"Vector2D.h"
#include <iostream>

using namespace std;

Vector2D::Vector2D(){
    m_Element[0] = 0;
    m_Element[1] = 0;
    cout << "Standardkonstruktor von Vector2D wurde aufgerufen \n";
}

Vector2D::Vector2D(int elem_1, int elem_2){
    m_Element[0] = elem_1;
    m_Element[1] = elem_2;
    cout << "Konstruktor von Vector2D wurde aufgerufen \n";
}
// AB 5
// Addiert den übergebenen Vektor auf den Vektor mit dem diese Funktion aufgerufen wird
void Vector2D::addiere(Vector2D v){
    for (int i = 0; i < 2; i++){
      this -> m_Element[i] =  this -> m_Element[i] + v.m_Element[i];
    }
}
// AB 6.3 
// kopiert übergebenen Vektor in den Vektor mit dem diese Funktion aufgerufen wurde
// hierbei muss der übergebene Vektor ein Pointer (Speicheradresse) sein
void Vector2D::kopiereIn(Vector2D *zielvar){
    for (int i = 0; i < 2; i++){
      zielvar -> m_Element[i] = this -> m_Element[i];
    }
}

// AB6.4
// Globale FUnktion deshalb in keiner Klasse
// Function body in Vector2D.h, auch dort ausherhalb der Klasse
// Wichtig der Funktionsprototyp muss unter der Vektor2D Klasse stehen, da diese Funktion Vektor2D Objekte als Argumente besitzt 
void tausche(Vector2D* a, Vector2D* b){
    Vector2D temp;
    a->kopiereIn(&temp);
    b->kopiereIn(a);
    temp.kopiereIn(b);
    // Vector2D temp = *a;
    // *a = *b;
    // *b = temp;
}

void Vector2D::ausgabe(){
        cout << "Vektor2D: " << endl;
        Matrix::ausgabe();
    }