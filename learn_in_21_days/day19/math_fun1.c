#include<stdio.h>
#include<math.h>

int main(void){
  double x;
  printf("Enter a number: ");
  scanf("%lf", &x);

  printf("The original number value: %lf\n", x);
  printf("Ceil: %lf\n", ceil);
  printf("Floor: %lf\n", floor);
  if ( x >= 0)
    printf("Square root: %lf\n", sqrt(x));
  else
    printf("Negative number\n");
  printf("Cosine: %lf\n", cos(x));
  return 0;
}
