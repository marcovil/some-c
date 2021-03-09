#include <stdio.h>

int lg(int);

int main(void) {
  printf("n=0 %d\n", lg(0));
  printf("n=1 %d\n", lg(1));
  printf("n=99 %d\n", lg(99));
  printf("n=100 %d\n", lg(100));
  printf("n=101 %d\n", lg(101));
  printf("n=10123 %d\n", lg(10123));
}

int lg(int n) {
  int m=0;
  int result=1;
  while (result <= n) {
    result *= 10;
    m += 1;
  }
  return m - 1;
}
