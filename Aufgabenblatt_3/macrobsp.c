#include <stdio.h>
#include <math.h>
//#c  damit das makro auch bei zusammengesetzen variablen der form a = b+c funktioniert, müssen die variablen immer geklammert werden
// #define PYTHAGORAS(a,b) sqrt(a*a + b*b); so kommt im zweiten fall anstatt 5 , 3.464102 raus

#define PYTHAGORAS(a,b) sqrt((a)*(a) + (b)*(b))

int main(){
    double x = PYTHAGORAS(3,4);
    double y = PYTHAGORAS(1+3,2+1);
    printf("%f \n",x);
    printf("%f \n", y);
}
//#d  According to gcc manual, the -E option only preprocesses the .c source file, without running the compiler and just giving an input file (.i).