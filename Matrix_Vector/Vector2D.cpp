#include"Vector2D.h"
#include <iostream>

using namespace std;

Vector2D::Vector2D(){
    m_Element[0] = 0;
    m_Element[1] = 0;
    // cout << "Standardkonstruktor von Vector2D wurde aufgerufen \n";
}

Vector2D::Vector2D(int elem_1, int elem_2){
    m_Element[0] = elem_1;
    m_Element[1] = elem_2;
    // cout << "Konstruktor von Vector2D wurde aufgerufen \n";
}

void Vector2D::addiere(Vector2D v){
    for (int i = 0; i < 2; i++){
      this -> m_Element[i] =  this -> m_Element[i] + v.m_Element[i];
    }
    
}