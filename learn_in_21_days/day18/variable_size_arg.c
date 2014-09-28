#include<stdio.h>
#include<stdarg.h>

float average(int num, ...);

int main(void){
  float x;
  
  x = average(10, 1,2,3,4,5,6,7,8,9,10);
  printf("\nThe first average is %f\n", x);

  x = average(5, 10, 20, 30, 40, 44);
  printf("\nThe second average is %f\n", x);

  return 0;
}

float average(int num, ...){
  /* Declare a variable of type va_list */
  va_list arg_ptr;
  int count, total = 0;

  /* Initialize the argument pointer. */
  va_start(arg_ptr, num);

  /* Retrieve each argument in the variable list. */
  for(count = 0; count < num; count++){
    total += va_arg( arg_ptr, int);
  }

  /* Perform clean up. */
  va_end(arg_ptr);

  // Calculate the average and cast the return value to float
  return ((float) total / num);

}
