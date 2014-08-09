#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person{
  char *name;
  int age;
  struct person *next;
};
typedef struct person employee;

void add_employee(employee *emp);
void display_employees(employee *emp);
char *get_name();
int get_age();

int main(void){
  employee *emp;
  emp = (struct person*) malloc(sizeof(employee));
  if (emp != NULL){
    emp->name = get_name();
    emp->age = get_age();
    emp->next = NULL;
  }
  char opt;
  while (1){
    getc(stdin);
    printf("Do you want to add more employees (y/n): ");
    opt = getchar(); 
    if (opt == 'y' || opt == 'Y'){
      getc(stdin);
      add_employee(emp); 
    } else {
      break;
    }
  }  

  display_employees( emp );
  return 0;
}
void add_employee(employee *emp){
  employee *curr = emp;
  while(curr->next != NULL){
    curr = curr->next;
  }
  employee *new = (struct person*) malloc(sizeof(employee));
  new->name = get_name();
  new->age = get_age();
  new->next = NULL;
  curr->next = new;
}
void display_employees(employee *emp){  
  while(emp != NULL){
    puts("** Employee Details **");
    printf("Name: %s", emp->name);
    printf("Age: %d\n", emp->age);
    puts("**********************");
    emp = emp->next;
  }
}
char *get_name(){
  char buffer[100];
  char *name;
  fflush(stdin);
  while(1){
    printf("Enter the name: ");
    fgets(buffer, 100, stdin);
    if (buffer[0] == '\0' || buffer[0] == '\n'){
      continue;
    }
    name = (char *) malloc( strlen(buffer) + 1 );
    strcpy(name, buffer);
    break;    
  }
  return name; 
}
int get_age(){
  int age;
  printf("Enter the age: ");
  scanf("%d", &age);
  return age;
}


