#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ARRAY_LENGTH 25

int get_lines(char *array[]);
void sort_lines(char *array[], int n);
void display_lines(char *array[], int n);
int natural_sort(char *line1, char *line2);
int reverse_sort(char *line1, char *line2);

int main(void) {
  char *lines[ARRAY_LENGTH];
  int no_of_lines = get_lines(lines);
  if (no_of_lines > 0){
    sort_lines(lines, no_of_lines);
    display_lines(lines, no_of_lines);
  }
  return 0;
}

int get_lines(char *array[]){
  char buffer[80];
  int i = 0;
  puts("***********************************");
  puts("Enter employee names (just enter to exit)");
  while( i < ARRAY_LENGTH ){
    printf("%d. Employee name: ", (i+1));
    fgets(buffer, 80, stdin);
    if (buffer[0] == '\0' || buffer[0] == '\n'){
      break;
    }
    array[i] = (char *) malloc(strlen(buffer)+1 * sizeof(char));
    if (array[i] == NULL)
      break;
    strcpy(array[i], buffer);
    i++;
  }
  puts("***********************************");
  return i;
}
void sort_lines(char *array[], int no_of_lines){
  char sort_type;
  printf("Do you want to sort in reverse order (y/n): ");
  scanf("%c", &sort_type);
  int (*sort)(char *line1, char *line2);
  if (sort_type == 'y' || sort_type == 'Y'){
    sort = reverse_sort;
  } else {
    sort = natural_sort;
  }
  int i, j;
  char *aux;
  for (i = 1; i < no_of_lines; i++){
    for ( j = 0; j < no_of_lines - 1; j++){
      if (sort(array[j], array[j+1]) > 0){
        aux = array[j];
        array[j] = array[j+1];
        array[j+1] = aux;
      }
    }
  }  
}
void display_lines(char *array[], int no_of_lines){
  int i = 0;
  puts("************* Employee List **************");
  for ( i = 0; i < no_of_lines; i++){
    printf("%d. %s\n", i, array[i]);
  }
}
int natural_sort(char *line1, char *line2){
  return strcmp(line1, line2);
}
int reverse_sort(char *line1, char *line2){
  return strcmp(line2, line1);
}
