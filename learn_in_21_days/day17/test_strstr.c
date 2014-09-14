#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
  char *line="This is a secret word";
  char *guess = (char *) malloc(40 * sizeof(char));
  while (1) {
    printf("Enter a word (just enter to exit): ");
    gets(guess);
    if (!strlen(guess)){
      break;
    }
    
    char *res = strstr(line, guess);
    if ( res != NULL ){
      printf("The word: %s IS in the secret phase at index: %s\n", guess, res); 
    } else {
      printf("The word: %s IS NOT in the secret phrase!\n", guess);
    }
  }
  return 0;

}
