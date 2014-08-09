#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(){
  int random_array[SIZE][SIZE][SIZE];
  int i, j, k;
  for (i=0; i<SIZE; i++){
    for (j=0; j<SIZE; j++){
      for (k=0; k<SIZE; k++){
        random_array[i][j][k] = rand();
      }
    }
  }

  // print randon array
  puts("## RANDOM ARRAY ##");
  for (i=0; i<SIZE; i++){
    for (j=0; j<SIZE; j++){
      for (k=0; k<SIZE; k++){
        printf("Row: %d, Col: %d, Cell: %d [VALUE = %d]\n", i, j, k, random_array[i][j][k]);
      }
      puts("Press Enter o Ctrl + C to quit");
      getchar();
    }
  }
  return 0;
}
