//zad2; Mariia Hnatiuk
#include <stdio.h>
#include <math.h>

int main()
{
  int a = 0;
  int b = 0;
  int c = 0;
  int delta;
  scanf("%d %d %d", &a, &b, &c);

if (a == 0)
 {
  printf("To nie rownanie kwadratowe.\n");
  return 0;
    }
delta=b*b-(4*a*c);

    if (delta < 0)
    {
      printf("Brak rozwiazan.\n");
    }
    if (delta == 0)
    {
      int x = -(b)/(2*a);
      printf("Rozwiazanie to: %d\n", x);
    }
 //   if (delta > 0)
 //   {
 //   float x_1 = -(b - sqrt(delta))/(2*a), x_2 = -(b + sqrt(delta))/(2*a);
 //   printf("Rozwiazania to: %.2f oraz %.2f", x_1, x_2);
 //   }

    return 0;
}
