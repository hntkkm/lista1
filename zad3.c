//zad3.Mariia Hnatiuk
#include <stdio.h>
int main(void)
{
 int x;
 int y;
 scanf("%d", &x);
 y=2*x;
 
 for(int i = 0; i<x; i++)
 {printf(" \n");
  for(int j = 0; j<y; j++)
  {
   printf("*");
   }
 }

printf(" \n"); 
return 0;
}
