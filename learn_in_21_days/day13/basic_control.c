#include<stdio.h>
#include<stdlib.h>

int main(){
  char buffer[124];
  int ctr;
  int vowels = 0;  

  puts("Enter a line of text");
  gets(buffer);

  for(ctr = 0; buffer[ctr] != '\0'; ctr++){
    if ((buffer[ctr] == 'a') || 
      (buffer[ctr] == 'e') || 
      (buffer[ctr] == 'i') || 
      (buffer[ctr] == 'o') || 
      (buffer[ctr] == 'u')){
      vowels++;
    } else {
      putchar(buffer[ctr]);
    } 
  }
  printf("\nTotal number of vowels: %d\n", vowels);
  return 0;
}
