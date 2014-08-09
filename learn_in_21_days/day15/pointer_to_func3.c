#include<stdio.h>
#include<stdlib.h>

void func(void (*f)(void));
void one(void);
void two(void);
void three(void);

int main(void){
  int x;
  void (*p)(void);
  while(1){
    printf("Enter a number between 1 and 10. Enter 0 to exit: ");
    scanf("%d", &x);
    if (x == 0)
      break;
    else if (x == 1)
      p = one;
    else if (x == 2)
      p = two;
    else if (x > 2 || x <= 10)
      p = three;
    else
      continue;
    func(p);
  }
}

void func(void (*f)(void)){
  f();
}
void one(void){
  puts("You entered one");
}
void two(void){
  puts("You entered two");
}
void three(void){
  puts("You entered other number between three and ten.");
}
