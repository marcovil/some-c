#include <stdio.h>

int main() {

  int x = 0;
  int y = 0;

  printf("Inserisci due numeri interi: ");
  scanf("%d %d", &x, &y);

  printf("La somma dei due numeri e' %d\n", x+y);

  return 0;
}
