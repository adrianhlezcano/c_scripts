#include <stdio.h>

int main(){
  int age = 29;
  int *p_age = &age;

  puts("** Display the age **");
  printf("Direct access: %d\n", age);
  printf("Indirect access: %d\n", *p_age);
  printf("Memory direct access: %ld\n", &age);
  printf("Memory indirect access: %ld\n", p_age);

  // Modify the age by pointer variable
  *p_age = 30;
  puts("** Modify the age using the pointer **");
  printf("[Direct Access]: New age value: %d\n", age);
  printf("[Indirect Access]: New age value: %d\n", *p_age);
  return 0;
}
