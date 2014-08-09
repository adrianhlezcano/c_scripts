#include <stdio.h>
#include <stdlib.h>

int main(void){
  char *ptr, *p, count;
  
  // allocate memory for alphabet
  ptr = (char *) malloc(27 * sizeof(char));
  if (ptr == NULL){
    puts("Cannot allocate memory for aphabet");
    return 1;
  } else {
    p = ptr;
    for(count=65; count<91; count++){
      *p++ = count;
    }
    *p = '\0';

    puts(ptr);
    return 0;
  }
}
