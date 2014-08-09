#include <stdio.h>

long calculate_cube(long value);

int main(){
  long input_val, cube;

  printf("Enter a number to calculate the cube: ");
  scanf("%d", &input_val);
  
  cube = calculate_cube(input_val);
  printf("\nThe cube of %d is: %d.\n", input_val, cube);

  return 0;
}

long calculate_cube(long value){
  long result = value * value * value;
  return result;
}
