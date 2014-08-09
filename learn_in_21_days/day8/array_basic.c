#include <stdio.h>
#define MONTHS 12 

void print_report(float expenses[]);

int main(){
  float expenses[MONTHS];
  int counter; 
  float total;

  puts("Enter the expenses for each month");
  
  for (counter=0; counter < MONTHS; counter++){
    printf("Month %d: ", (counter + 1));
    scanf("%f", &expenses[counter]);
  }
  print_report(expenses);  
 
  return 0;
}

void print_report(float expenses[]){
  printf("\n## Report ##\n");
  float total;
  int counter;

  for(counter=0; counter < MONTHS; counter++){
    printf("%2d: %.3f\n", (counter+1), expenses[counter]);
    total += expenses[counter];
  }
  printf("\t\tTotal: %.2f\n", total);
}
