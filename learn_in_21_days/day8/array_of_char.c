#include <stdio.h>

int main(){
  int array[256];
  int i;

  for(i=0; i<256; i++){
    array[i] = i;
  }

  puts("** List of 256 Characters **");
  for(i=0; i<256; i++){
    printf("[%d]: %c\t", i, array[i]);
  }
  printf("\n");
  return 0;

}
