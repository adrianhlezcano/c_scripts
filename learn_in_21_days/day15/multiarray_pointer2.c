#include<stdio.h>

void print_chars(char (*names)[15], int n);

int main(void){
  char names[4][15] = {{"Adrian"},{"Soledad"},{"Agustin"},{"Daniel"}};
  printf("Print an array of names: names[4][15]\n");
  char (*ptr)[15] = names;
  print_chars(ptr, 4);
  return 0;
}

void print_chars(char (*names)[15], int n){
  char *c; 
  int counter;
  c = (char *) names;
  for (counter = 0; counter < (15 * n); counter++){
    if (counter > 0 && (counter % 15 == 0)){
      printf("\n");
    }
    printf("%c ", *c++);
  }
  puts("");
}
