#include<stdio.h>
#include<stdlib.h>

int main(void){
  char buffer[255];
  char *ptr = (char *) malloc(50 * sizeof(char));
  char *c;

  puts("Write a phrase (255 max)");
  c = gets(buffer);

  printf("%s\n", buffer);
  printf("%s\n", c);
 
  puts("writer another phrase (50 max)");
  c = gets(ptr);

  printf("%s\n", ptr);
  printf("%s\n", c);

  return 0;

}
