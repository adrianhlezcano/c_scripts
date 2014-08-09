#include <stdio.h>
#define MAX 10

int main(){
  int numbers[MAX] = {1,2,3,4,5,6,7,8,9,10};
  float decimals[MAX] = {.1, .2, .3, .4, .5, .6, .7, .8, .9, .10};

  int *p_numbers;
  float *p_decimals;
  p_numbers = numbers;
  p_decimals = decimals;

  puts("** Print numeric values [Incrementaly] **");
  int i;
  for(i = 0; i<MAX; i++){
    printf("Integer: %d\t\tDecimal: %f\n", *p_numbers++, *p_decimals++);
  }
  *p_numbers--;
  *p_decimals--;
  puts("** Print numeric values [Decrementaly] **");
  for(i = 0; i<MAX; i++){
    printf("Integer: %d\t\tDecimal: %f\n", *p_numbers--, *p_decimals--);
  }
  return 0;
}
