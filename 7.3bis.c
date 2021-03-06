#include <stdio.h>

int main(void) {
  int c;
  int count = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      while (count > 0) {
	putchar('-');
	--count;
      }
      putchar('\n');
    } else {
      ++count;
    }
  }
  return 0;
}
