#include <stdio.h>
#include <stdlib.h>

union temp {
  char character;
  int number;
} template;

int main(void) {
  template.character = '$';
  printf("char %c\n", template.character);

  template.number = 10;
  printf("number %d\n", template.number);
  return 0;
}
