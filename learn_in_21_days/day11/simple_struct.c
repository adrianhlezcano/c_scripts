#include <stdio.h>
#include <stdlib.h>

int main(void){
  /* Declare an struct for the birthday of a person */
  struct birth {
    int day;
    int month;
    int year;
  };
  /* Declare the person struct */
  struct person {
    struct birth birthday;
    char *first_name;
    char *last_name;
    int dni;
    float salary;
  };
  struct person employee;

  employee.first_name = (char *) malloc(50 * sizeof(char));
  employee.last_name = (char *) malloc(40 * sizeof(char));

  if (employee.first_name == NULL || employee.last_name == NULL){
    puts("Cannot allocate memory");
    return 1;
  }
  puts("Enter your Employee Information"); 
  printf("Enter your first name: ");
  gets(employee.first_name);

  printf("Enter your last name: ");
  gets(employee.last_name);

  printf("Enter your birthdate (dd mm yyyy): ");
  scanf("%d%d%d", &employee.birthday.day, &employee.birthday.month, &employee.birthday.year);

  printf("Enter your dni: ");
  scanf("%d", &employee.dni);

  printf("Enter your average salary: ");
  scanf("%f", &employee.salary);

  puts("\n*** Employee Details ***");
  printf("Full Name: %s %s\n", employee.first_name, employee.last_name);
  printf("DNI: %d\n", employee.dni);
  printf("Date of birth: %d/%d/%d\n", employee.birthday.day, employee.birthday.month, employee.birthday.year);
  printf("Salary: %.2f\n", employee.salary);
  puts("**************************");
  return 0;
}
