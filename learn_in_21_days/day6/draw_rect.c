#include <stdio.h>

int main(){
  char top_down_row[10];
  char row[10];
  int i = 0;

  for(i=0; i<10; i++){
    if (i == 0 || i == 9)
      row[i] = '|';
    else
      row[i] = ' ';  
    top_down_row[i] = '_';
  }

  printf("%10s\n", &top_down_row);
  for(i=0; i<10; i++){
    printf("%10s\n", &row);
  }
  printf("%10s\n", &top_down_row);
  
  return 0;
}
