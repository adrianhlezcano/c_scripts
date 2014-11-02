#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(void){
	FILE *fp;
	char filename[50];
	
	printf("Enter a file name to open: ");
	gets(filename);
	
	if (filename != NULL){
		if ((fp = fopen(filename, "r")) == NULL){
			perror("You goofed!");
			fprintf(stderr, "errno = %d.\n", errno);
			exit(1);
		} else {
			fprintf(stdout, "File opened successfully\n");
			fclose(fp);
		}
		perror("You have to enter a file name");
		
	}
	return 0;
	
	
}
