#include <stdio.h>

int lg(int);

int main()
{
	for (int i = 1; i <= 300000; i=i*10)
	{
		printf("10^m <= %d con m==%d\n", i, lg(i));
	}		
}
			
int lg(int n)
{
	int c = 0;
	int value = 1;
	
	while (value <= n)
	{
		++c;
		value = value * 10;
	}
	
	return c;
}
