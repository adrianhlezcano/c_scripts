#include <stdio.h>
#include <stdlib.h>

# define PI 3.14159

int main(){
  float radius;

  printf("Enter the radious of the circunference: ");
  scanf("%f", &radius);
  double area = PI * radius * radius;
  printf("The area of the circunference is: %.5f\n", area);
  return 0;
}
