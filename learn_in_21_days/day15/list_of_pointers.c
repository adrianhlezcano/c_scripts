#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_CHARS 100
#define MAX_LINES 25

int get_lines(char *lines[]);
void sort_lines(char *lines[], int n);
void display_lines(char *lines[], int n);

int main(void){
  char *lines[MAX_LINES];
  int nolines = get_lines(lines);
  sort_lines(lines, nolines);  
  display_lines(lines, nolines);
  return 0;

}

int get_lines(char *lines[]){
  int c = 0;
  char buffer[MAX_CHARS];
  while (c < MAX_LINES ){
    fflush(stdin);
    printf("%d. Employee name: ", c);
    fgets(buffer, MAX_CHARS, stdin);
    if (buffer[0] == '\0' || buffer[0] == '\n'){
      break;
    }

    lines[c] = (char *) malloc(strlen(buffer) + 1);
    if (lines[c] == NULL){
      break;
    }
    strcpy(lines[c++], buffer);   
  }
  return c; 
}

void sort_lines(char *lines[], int n){
  int i, j;  
  char *x;
  
  for(j=1; j < n; j++){    
    for ( i=0; i < n-1 ; i++ ){
      
      if (strcmp(lines[i], lines[i+1]) > 0){
        x = lines[i];
        lines[i] = lines[i+1];
        lines[i+1] = x;       
      } 
    }
  }    
}

void display_lines(char *lines[], int n){
  int i = 0;
  printf("\n\n***** Report of Employees *****\n");
  for(i=0; i<n; i++){
    printf("%d. %s\n", i, lines[i]);
  }
}
