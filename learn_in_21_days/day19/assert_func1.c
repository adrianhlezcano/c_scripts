#include<stdio.h>
#include<assert.h>

#define NDEBUG

int main(void){
	int x;
	
	printf("Enter an integer number: ");
	scanf("%d", &x);
	
	assert(x >= 0);
	
	printf("You entered %d\n", x);
	return 0;
}
