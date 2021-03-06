#include <stdio.h>

int main(void)
{
  int sc = 0, tc = 0, nlc = 0;
  int c;
  while ((c=getchar()) != EOF) {
    switch (c) {
    case ' ':
      ++sc;
      break;
    case '\t':
      ++tc;
      break;
    case '\n':
      ++nlc;
      break;
    default:
      ;
    }
  }
  printf("spaces:%d\ntabs:%d\nnewlines:%d\n", sc, tc, nlc);
  return 0;
}
	
