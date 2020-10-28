#include <stdio.h>

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{

  int x = 42, y = 0;

  printf("x value is %d, and y value is %d\n", x, y);

  swap(&x,&y);

  printf("x value is %d, and y value is %d\n", x, y);

  return 0;
}
