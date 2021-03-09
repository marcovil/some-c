#include <stdio.h>

int is_whitespace(int); //dichiarazione

int main(void) {
  int c;
  int count = 0;
  while ((c = getchar()) != EOF) {
    if (is_whitespace(c)) {
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

int is_whitespace(int c) {
  if (c == ' ' || c == '\t' || c == '\n') {
    return 1;
  } else {
    return 0;
  }
}
