#include <stdio.h>

int is_whitespace(int);

int main() {
  int i = 0, n = 0;

  for(int c = getchar(); c != EOF; c = getchar())
  {
    if(is_whitespace(c) == 0) {
      n++;
    } else {

      for(i = 0; i < n; i++)
        printf("-");

      if(n > 0)
        printf("\n");

      n = 0;
    }
  }

  return 0;
}

int is_whitespace(int x)
{
	if (x == ' ' || x == '\n' || x == '\t') {
		return 1;
	} else {
		return 0;
	}
}
