#include<stdio.h>
#include<stdlib.h>

char message1[60] = "Four score and seven years ago ...";
char message2[60] = "abcdefghijklmnopqrstuvwxyz";
char temp[60];

int main(void){
  printf("message1[] before memset: %s.\n", message1);
  memset(message1 + 5, '@', 10);
  printf("message1[] after memset: %s.\n", message1);

  strcpy(temp, message2);
  printf("\nOriginal message: %s\n", temp);
  memcpy(temp + 4, temp + 16, 10);
  printf("\nAfter memcpy() without overlap: \t%s", temp);
  strcpy(temp, message2);
  memcpy(temp + 6, temp + 4, 10);
  printf("\nAfter memcpy() with overlap:\t%s", temp);

  strcpy(temp, message2);
  printf("\n\nOriginal message: %s", temp);
  memmove(temp + 4, temp + 16, 10);
  printf("\nAfter memmove() without overlap: \t%s", temp);
  strcpy(temp, message2);
  memmove(temp + 6, temp + 4, 10);
  printf("\nAfter memmove() with overlap:\t%s\n", temp);

  return 0;
}
