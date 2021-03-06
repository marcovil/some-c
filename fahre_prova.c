#include <stdio.h>

int main(void)
{
  int f=0;
  printf("FAHRENHEIT - CELSIUS\n");
  while(f<=300){
    printf("%10d   %7.3f\n", f, (f-32)*(5.0/9));
    f += 20;
  }
  return 0;
}
  
