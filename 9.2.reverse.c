#include <stdio.h>

#define SIZEA 4
#define SIZEB 5

int reverse(int *, int);

int main() {
  int arraya[SIZEA] = { 1, 2, 3, 4 };
  int arrayb[SIZEB] = { 1, 2, 3, 4, 5 };

  reverse(arraya, SIZEA);
  reverse(arrayb, SIZEB);

  for(int i = 0; i < SIZEA; i++) {
    printf("arraya[%d] = %d\n", i, arraya[i]);
  }

  for(int j = 0; j < SIZEB; j++) {
    printf("arrayb[%d] = %d\n", j , arrayb[j]);
  }
}
  
int reverse(int *begin, int size) {
  int temp = 0;
  int *end = begin+size-1;

  while (begin<=end) {
    temp = *begin;
    *(begin) = *end;
    *end = temp;
    begin = begin + 1;
    end = end - 1;
  }

  return 0;
}
