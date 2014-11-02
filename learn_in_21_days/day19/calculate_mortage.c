#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  int term;
  float rate, amount, payment;
  char c;

  while(1){
    /* Get loan Data */
    printf("Enter the loan amount: ");
    scanf("%f", &amount);
    printf("\nEnter the annual rate: ");
    scanf("%f", &rate);
    /* Adjust the rate */
    rate /= 100; // adjust in percentage
    rate /= 12; // adjust per month
    printf("\nEnter the loan duration in months: ");
    scanf("%d", &term);

    payment = (amount * rate) / (1 - pow((1+rate), -term));
    
    printf("\n\tYour monthly payment will be $ %.2f.\n", payment);

    puts("Do another (y or n)?");
    do {
      c = getc(stdin);
    } while (c != 'y' && c != 'n');
    if (c == 'n')
      break;
  }  
}
