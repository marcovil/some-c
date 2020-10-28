#include <stdio.h>

#define SIZE 10

int main() {
  int array[SIZE] = {};
  int val = 0;

  printf("Inserisci un valore: ");
  scanf("%d", &val);

  for (int *p = &array[0]; p < &array[0] + SIZE; ++p) {
    *p = val;
  }

  for (int i = 0; i < SIZE; ++i) {
    printf("array[%d] = %d\n", i, array[i]);
  }

  return 0;
}
