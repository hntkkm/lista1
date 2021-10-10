//zad1; Mariia Hnatiuk
#include <stdio.h>
int main()
{
 int x;
 int y;
 int sr,n,s2;
 scanf ("%d", &x);
 y=2*x-1;    //ilosc elementow w rzedzie
 sr=(y+1)/2; //srodek w 1. rzedzie
 n=0;

 
 for (int j=0; j<x; j++)
  {

   for (int d=1; d<sr; d++)
    {
      printf(" ");
     n=n+1;
    }

   s2=(y-(2*n));

   for (int s=0; s<s2; s++)
     {
      printf("*");
      n=n+1;
     }

    for (int d2=n;d2<y; d2++)
     printf(" ");

  printf("\n");
  sr=sr-1;
  n=0;
 }
}
