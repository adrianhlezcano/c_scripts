#include<stdio.h>
#include<stdlib.h>

void func(int x);
void f_one(void);
void f_two(void);
void f_three(void);

int main(void){
  int x = 1;
  while (1) {
    printf("Enter a number between 1 and 10. Enter 0 to exit: ");
    scanf("%d", &x);
    if (x == 0){
      break;
    } else if (x > 0 && x <= 10){
      func(x);
    } else {
      puts("You entered an invalid number");
    }
  }
}

void func(int x){
  void (*p)(void);
  
  if (x == 1){
    p = f_one;    
  } else if (x == 2){
    p = f_two;
  } else {
    p = f_three;
  }
  p();
}

void f_one(void){
  puts("You entered 1");
}
void f_two(void){
  puts("You entered 2");
}
void f_three(void){
  puts("You enter a number greater than 2 and less than 10.");
}
