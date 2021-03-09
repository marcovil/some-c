#include <stdio.h>
#define SIZE 7

int main(void) {
  int arr[SIZE] = { 21 , 7 , 14 , 1 , 6 , 8 , 32 };

  for (int i = 0; i < SIZE - 1; ++i) {
    for (int j = SIZE - 1; j >= i + 1; --j) {
      if (arr[j] < arr[j-1]) {
	int temp = arr[j-1];
	arr[j-1] = arr[j];
	arr[j] = temp;
      }
    }
  }

  for (int k = 0 ; k < SIZE ; ++k) {
    printf("%d\n", arr[k]);
  }

  return 0;
}
	    
