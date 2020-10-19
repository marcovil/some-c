#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STE	20

int main() 
{
	
	printf("Tabella Fahrenheit-Celsius:\n");
	
	for(float fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3.0f °F -> %6.1f °C\n", fahr, (5.0 / 9.0)*(fahr - 32));
	
	return 0;
}
