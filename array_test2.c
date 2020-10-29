#include <stdio.h>

#define SIZE 10

void fill(int *, int, int);

int main() {
  
  int array[SIZE] = { }, val = 0;

  for(int i = 0; i < SIZE; ++i)
    printf("array[%d] = %d\n", i, array[i]);
  
  printf("Inserisci un valore: ");
  scanf("%d", &val);
  
  fill(array, SIZE, val);

  for(int i = 0; i < SIZE; ++i)
    printf("array[%d] = %d\n", i, array[i]);

  return 0;
  
}

void fill(int *begin, int size, int value) {

  for(int *p = begin; p < begin + size; ++p)
    *p = value;
  
}
