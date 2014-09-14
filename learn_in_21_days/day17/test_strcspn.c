#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print_search_result(int result, char *phrase, char *word);

int main(void) {
  char *phrase = (char *) malloc(80 * sizeof(char));
  char *word = (char *) malloc(40 * sizeof(char));
  
  while(1){
    printf("Enter a phrase (enter to exit): ");
    gets(phrase);
    if ( !strlen(phrase) ){
      break;
    }    

    printf("Enter a word to search in the phrase: ");
    gets(word);

    int search_strcspn = strcspn(phrase, word);
    int search_strspn = strspn(phrase, word);
    
    print_search_result(search_strcspn == strlen(phrase), phrase, word);
    print_search_result(search_strspn == 0, phrase, word);        
  }
  return 0;
}

void print_search_result(int result, char *phrase, char *word){
  if (result){
    printf("The word: %s was NOT FOUND in %s.\n", word, phrase);
  } else {
    printf("The word %s was FOUND in %s.\n", word, phrase);
  }
}
