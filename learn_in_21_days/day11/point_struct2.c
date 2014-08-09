#include <stdio.h>
#include <stdlib.h>
#define NO_OF_EMP 4

struct data{
  int id;
  char name[50];
  float salary;
} employees[NO_OF_EMP] = {
  30997234, "Adrian Lezcano", .0,
  31887884, "Soledad Caceres", .0,
  13905599, "Carmen Gonzalez", .0, 
  12440419, "Lezcano Humbero", .0
};

void print_emp_list(struct data list[]);

int main(){
  struct data *p_emp;
  p_emp = employees;

  int x = 0;

  puts("**\t\tEmployee List\t\t**");
  while (x < NO_OF_EMP){
    printf("Id: %d Name: %s", p_emp->id, p_emp->name);
    printf("\tEnter a salary: ");
    scanf("%f", &(p_emp->salary));
    p_emp++;
    x++;
  }
  puts("**\t\t************\t\t**");
  print_emp_list(employees);
  return 0;

}

void print_emp_list(struct data list[]){
  int x = 0;

  puts("**\t\tEmployee List\t\t**");
  while (x < NO_OF_EMP){
    printf("Id: %d Name: %s, Salary: %0.2f\n", list[x].id, list[x].name, list[x].salary);
    x++;
  }

}
