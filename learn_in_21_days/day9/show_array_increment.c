#include <stdio.h>

int main(){
  int array[10] = { 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 };
  int i;

  puts("** Display array incrementally *(array + x) **");
  for (i=0; i<10; i++) {
    printf("Element[%d]= %d\n", i, *(array + i));
  }
  return 0;

}
