#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int get_highest(int *array, int size);

int main() {
  int array[MAX];
  int i;

  puts("Enter 10 numbers");
  for (i=0; i<MAX; i++){
    printf("N. %d: ", (i+1));
    scanf("%d", &array[i]);
  }
 
  printf("\nThe highest number is: %d\n", get_highest(array, MAX));
  return 0;  
}

int get_highest(int *array, int size){
  int i;
  int higher = -10000;

  for (i=0; i<size; i++){
    if (*(array + i) > higher){
      higher = array[i];
    }
  }
  return higher;
}

