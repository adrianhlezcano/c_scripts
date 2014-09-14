#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void clear_console(void);

int main(void) {
  char *phrase = (char *) malloc(80 * sizeof(char));
  int search_letter;
  
  while(1){
    printf("Enter a phrase (enter to exit): ");
    gets(phrase);
    if ( !strlen(phrase) ){
      break;
    }    

    printf("Enter a letter to search in the phrase: ");
    search_letter = (int) getchar();
    
    char *search_result = strchr(phrase, search_letter);
    if (search_result == NULL)
      printf("The letter %c was NOT FOUND in %s.\n", search_letter, phrase);
    else
      printf("The letter %c was FOUND in %s.\n", search_letter, phrase);
    
    clear_console();
  }
  return 0;
}

void clear_console(void){
  char buffer[80];
  gets(buffer);
}
