#include <stdio.h>

int power(int, int); // dichiarazione

int main()
{
	for(int i = 0; i < 10; ++i)
		printf("%d %3d %6d\n", i, power(2,i), power(-3,i));
	return 0;
}

int power(int m, int n) // definizione
{
	int p = 1;
	while (n > 0) {
	  p = p * m;
	  --n;
	}
	return p; // restituisce il valore di p al chiamante
}
