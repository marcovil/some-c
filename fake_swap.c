#include <stdio.h>

void fake_swap(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
}

int main()
{

  int x = 42, y = 0;

  fake_swap(x,y);

  printf("x value is %d, and y value is %d\n", x, y);

  return 0;
}
