#include <stdio.h>

int main()
{
	int c;
	int wc=0;
	int startword=0;
	
	while((c=getchar()) != EOF)	{
		if (c != '\n' && c != '\t' && c != ' ') {
			if (startword == 0) {
				++wc;
				startword = 1;
			}
		} else {
			startword = 0;
		}
	}
	
	printf("%d", wc);
	
	return 0;
}
