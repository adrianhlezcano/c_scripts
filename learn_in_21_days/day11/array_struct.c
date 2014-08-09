#include<stdio.h>
#include<stdlib.h>

int main(void){
  struct waste {
    char *month;
    float amount;
  };
  struct waste anual_waste[2];
  int x;

  for(x=0; x<2; x++){
    anual_waste[x].month = (char *) malloc(3 * sizeof(char));
    printf("Enter the month: ");
    scanf("%s", anual_waste[x].month);

    printf("Enter the waste: ");
    scanf("%f", &(anual_waste[x].amount));    
    puts("");
  }

  puts("*** Expenses Report ***");
  for(x=0; x<2; x++){
    printf("Month %s => %.2f\n", anual_waste[x].month, anual_waste[x].amount);
  }
  return 0;
}
