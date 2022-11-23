#include <stdio.h>
#include "func.h"
// gcc -c bspcpp.cpp func.c  
// gcc -o meinecpp  bspcpp.o func.o 

int  globalfunction(int x, int y)
{
  int z;
  printf("x=%d y=%d z=%d\n",x, y, z);
  z=x-y;
}

int  globalfunction2()
{
  unsigned int sth;
  printf("sth=%u\n",sth);
}

int main()
{
  int i= 111111;
  int j=-222222;
  unsigned int k=3333333333;

  char myString[] = "C";
  printf("Hallo %s!\n", myString);
  printf("Die ganze Zahl %d mit Vorzeichen %+d und als hex %x und %X.\n", i,i,i,i);
  printf("Die ganze Zahl %d mit Vorzeichen %+d und als hex %x und %X.\n", j,j,j,j);

  printf("Die Variable k: %d und nochmal k: %u.\n", k,k);
  
  globalfunction2();
  globalfunction(1,2);
  globalfunction(1,2);
  globalfunction2();
  float x = drittewurzel(3.375);
  printf("%f", x);
  return 0;
}
