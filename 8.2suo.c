#include <stdio.h>

int lg(int);
int lg2(int);
int power(int, int);

int main() 
{
  printf("%d\n", lg2(1500));
  printf("n=0 %d\n", lg(0));
  printf("n=1 %d\n", lg(1));
  printf("n=99 %d\n", lg(99));
  printf("n=100 %d\n", lg(100));
  printf("n=101 %d\n", lg(101));
  printf("n=10123 %d\n", lg(10123));

  return 0;
} 

int power(int m, int n) // definizione
{
   int p = 1;
   for (int i = 0; i < n; ++i)
      p = p * m;
   return p; // restituisce il valore di p al chiamante
}

// Versione che riutilizza power()
int lg(int n) 
{
  int result = 0;
  for(int m = 0; power(10, m) <= n; ++m) {
     result = m;
  }

  return result;
}

// Versione che calcola tutto insieme senza riutilizzare power()
int lg2(int n)
{
  int result = 0;
  int pow = 1;
  
  for(int m = 0; pow <= n; ++m, pow = pow * 10) {
    result = m;
  }

  return result;
}
