#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BLOCK_SIZE 30000

int main(void){
  void *p_1, *p_2;

  p_1 = malloc(BLOCK_SIZE);
  if (p_1 != NULL){
    printf("The first block was allocated successfully\n");
  } else {
    printf("The first block was not allocated\n");
    exit(1);
  }

  p_2 = malloc(BLOCK_SIZE);
  if (p_2 != NULL){
    printf("The second block was allocated successfully\n");
  } else {
    printf("The second block was not allocated\n");
  }

  puts("");

  free(p_1);
  printf("freeing first block\n");

  free(p_2);
  printf("freeing second block\n");

  if (p_1 != NULL)
    printf("Cannot deallocate the first block\n");
  
  if (p_2 != NULL)
    printf("Cannot deallocate the second block\n");

  return 0;
  
}
