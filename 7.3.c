#include <stdio.h>

int main()
{
	int c;
	
	while((c = getchar()) != EOF)
	{
		if(c=='\n' || c == '\t' || c == ' ') 
		{
			printf("\n");
			c = getchar();
			while(c=='\n' || c == '\t' || c == ' ')
				c = getchar();
			printf("-");
		}
		else
		{ 
			printf("-");
		}	
	}
	
	return 0;
}
