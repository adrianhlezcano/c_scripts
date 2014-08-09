#include<stdio.h>

int main(void){
  int a = 0;
  int *ptr_a = &a;
  int **ptr_ptr_a = &ptr_a;

  puts("Enter a number");
  scanf("%d", &a);

  printf("You entered %d.\n", a);
  printf("Pointer first level: %d\n", *ptr_a);
  printf("Pointer second level: %d\n", **ptr_ptr_a);
  return 0;
}
