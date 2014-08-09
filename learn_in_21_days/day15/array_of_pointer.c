#include<stdio.h>

void print_strings(char *p[], int n);

int main(void){
  char *p[4] = {"Adrian", "Sole", "Ariel", "Dani"};
  print_strings(p, 4);
  return 0;
}

void print_strings(char *p[], int n){
  int i = 0;
  puts("List of names");
  for (i=0; i<n; i++){
    printf("Name: %s.\n", p[i]);
  }
}
