#include <stdio.h>

#define SIZE 7

int sort(int *, int);

int main() {

  int arr[SIZE] = { 43, 12, 34, 12, 7, 19, 1 };

  sort(arr, SIZE);
  
  for (int j = 0; j < SIZE; j++)
    {
      printf("%d ", arr[j]);
    }
  printf("\n");

  return 0;
}

int sort(int *start, int size) {
  
  for (int *j = start; j < start+size; ++j) 
    {
      int key = *j;
      int *i = j-1;
      while (i > start-1 && *i > key) 
	{
	  *(i+1) = *i;
	  i = i-1;
	}
      *(i+1) = key;
    }

  return 0;
}
