#include <stdio.h>

int main() {
  int risposta = 42;
  int valori[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  
  for(int i = 0; i <= 10; ++i) {
    valori[i] = 0;
  }

  printf("La risposta e’: %d\n", risposta);

  return 0;
}
