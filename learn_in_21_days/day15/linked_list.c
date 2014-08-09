#include<stdio.h>
#include<stdlib.h>

#define MAX_CHARS 50

struct data{ 
  char name[MAX_CHARS];
  struct data *next;
};
typedef struct data PERSON;
typedef PERSON *LINK;

void display_node(LINK node);
void get_line(char name[]);
void add_node(LINK node);

int main(void){
  LINK head = NULL;
  LINK new = NULL;
  LINK current = NULL;
  
  new = (LINK) malloc(sizeof(PERSON));
  get_line(new->name);
  new->next = head;
  head = new;
  
  char entry;
  current = head;
  while (1) {
    printf("\nDo you want to add more names (y/n): ");
    entry = getchar();
    if (entry == 'y' ||  entry == 'Y'){
      getc(stdin);
      add_node(current);
    } else {
      break;
    }    
  }
  
  display_node(head);    
  return 0;
}

void get_line(char name[]) {  
  //int ch;
  //char trash[256];
  //ch = getc(stdin);
  
  puts( "Enter your name: " );
  fgets( name, (MAX_CHARS - 1), stdin );
  printf("Entered %s\n", name);
}

void add_node(LINK node){
  while(node->next != NULL){
    node = node->next;
  }
  LINK new;
  new = (LINK) malloc(sizeof(PERSON));
  node->next = new;
  new->next = NULL;    
  get_line(new->name);
}

void display_node(LINK node){
  int counter = 0;
  while (node != NULL) {
    printf("%d. %s\n", ++counter, node->name);  
    node = node->next;  
  }
}
