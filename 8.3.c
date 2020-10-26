#include <stdio.h>

int main()
{
	int valori[10] = { 47, 41, 21, 53, 108, 1, 0, 27, 26, 26 };
	
	for (int j = 1; j < 10; j++) 
	{
		int key = valori[j];
		int i = j-1;
		while (i > -1 && valori[i] > key) 
		{
			valori[i+1] = valori[i];
			i = i-1;
		}
		valori[i+1] = key;
	}
	
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", valori[j]);
	}
	printf("\n");
	
	return 0;
}
