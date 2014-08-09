#include <stdio.h>
#include <stdlib.h>

#define YES 1
#define NO 0
#define CHANCES 5

int main() {
  printf("This is a game of guess a number that the computer has thought.\n");
  int nbr_guesses = 0;
  int nbr_enter;
  int was_guessed = NO;
  
  /* use the time to seed the random number generatior */
  unsigned int rand_no = 0;
  srand( (unsigned) time(NULL));
  rand_no = rand() % 10;

  while (nbr_guesses < CHANCES){
    nbr_guesses++;
    
    printf("\nEnter a possible number (from 1 to 10): ");
    scanf("%d", &nbr_enter);

    if (nbr_enter == rand_no){
      was_guessed = YES;
      break;
    } else if (nbr_enter < rand_no){
      printf("Low Number\n");
    } else if (nbr_enter > rand_no){
      printf("High Number\n");
    }
    printf("You have %d more chances\n", (CHANCES - nbr_guesses));        
  }
  
  if (was_guessed){
    printf("\nCONGRATULATIONS: Your guessed the number (%d)!\n", nbr_enter);  
  } else {
    printf("\nBAD LUCK: You didn't guess the number (%d)\n", rand_no);
  }
  return 0;
}
