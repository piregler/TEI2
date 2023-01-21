#include <iostream>
#include "Matrix.h"
#include"Vector.h"
#include"Vector2D.h"

using namespace std;

int main(int, char**) {
    {
    Vector2D v(1,2), w(3,4);
        Matrix M;
        Matrix* Mpointer;
         M=v;
         Mpointer = &v;
        std::cout << "Ausgabe von M und über Mpointer" << std::endl;
        M.ausgabe();
        // Aufruf von Matrix ausgabe, da M einen Variablentyp von Matrix hat, 
        // bei C+ ist der Variablentyp nicht der objekttyp entscheidend
        // Matrix ausgabe virtual:
        // Aufruf von Matrix ausgabe, da M Objekttyp Matrix ist, 
        // Vektor2D ausgabe virtual:
        // Aufruf von Matrix ausgabe, da M Objekttyp Matrix ist,
        Mpointer->ausgabe();
        // Aufruf von Matrix ausgabe, da M einen Variablentyp von Matrix hat
        // Matrix ausgabe virtual:
        // Aufruf von Vektor2D ausgabe, da Mpointer Objekttyp Vektor2D ist,
        // Vektor2D ausgabe virtual:
        // Aufruf von Matrix ausgabe, da nur die derived function virtual is
        v.addiere(w);
        std::cout << "Ausgabe von v nach Addieren" << std::endl;
        v.ausgabe();
        //Aufruf von Vector2D ausgabe, da v einen Variablentyp von Vector2D hat
        // Matrix ausgabe virtual:
        // Aufruf von Vektor2D ausgabe
        // Vektor2D ausgabe virtual:
        // Aufruf von Vektor2D ausgabe
        // Wird (1,2) oder (4,6) ausgegeben?
        // Es wird (4,6) ausgegeben, da auf v(1,2) w(3,4) addiert wird
        std::cout << "Ausgabe von M/Mpointer nach Add." << std::endl;
        M.ausgabe();
        // Matrix ausgabe virtual:
        // Aufruf von Matrix ausgabe, da M Objekttyp Matrix ist,  
        // Vektor2D ausgabe virtual:
        // Aufruf von Matrix ausgabe
        Mpointer->ausgabe();
        // Aufruf von Matrix ausgabe, da M einen Variablentyp von Matrix hat
        // Matrix ausgabe virtual:
        // Aufruf von Vektor2D ausgabe da Mpointer Objekttyp Vektor2D ist, 
        // Vektor2D ausgabe virtual:
        // Aufruf von Matrix ausgabe
     // Wird (1,2) oder (4,6) ausgegeben?
     // Es wird zuerst (1,2) ausgegeben, bei M.ausgabe, da in M die werte von dem 2DVektor v(1,2) liegen, nur die Werte es ist immernoch ein eigenes Objekt
     // Danach wird (4,6) ausgegebenm da Mpointer auf den 2DVektor v zeigt, der (4,6) enthält
    }
    int count = Matrix::getCounter();
    cout << count << endl;
}

// Counter hat nach abschluss des Programms den Wert -1
// d.h. das der Dekonstruktor von Matrix 1 mal mehr als der Konstruktor aufgerufen wird
// könnte daran liegen dass