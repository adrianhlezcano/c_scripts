#include<stdio.h>

void print_array1(int (*ptr)[3]);
void print_array2(int (*ptr)[3], int n);

int main(void){
  int array[2][3] = { {1,2,3}, {4,5,6} };
  printf("multi = %u\n", array);
  printf("multi[0] = %u\n", array[0]);
  printf("&multi[0][0] = %u\n", &array[0][0]);

  // print the array in the first way
  puts("Print an array in the first way");
  int (*ptr)[3] = array;
  int i;
  for (i=0; i<2; i++){
    print_array1(ptr++);
    printf("\n");
  }
  
  printf("\nPrint multidmensional array in the second way\n");
  int (*ptr2)[3] = array;
  print_array2(ptr2, 2);
  puts("");

  return 0;
}

void print_array1(int (*ptr)[3]){
  int *p, counter;
  p = (int *) ptr;

  for (counter = 0; counter < 3; counter++){
    printf("%d ", *p++);
  }  
}

void print_array2(int (*ptr)[3], int n){
  int *p, counter;
  p = (int *) ptr;

  for (counter = 0; counter < (3 * n); counter++){
    printf("%d ", *p++);
  }  
}
