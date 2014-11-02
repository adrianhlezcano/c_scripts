#include<stdio.h>
#include<stdlib.h>

int compare_integer(const void *n1, const void *n2);

int main(void){
	int array[] = {1,21, 13, 123, 19, 19, 2, 3, 44, 12};	
	int num_of_elem = sizeof(array)/sizeof(array[0]);
	
	// sort array
	qsort(array, num_of_elem, sizeof(array[0]), compare_integer);
	int i;
	for (i = 0; i < num_of_elem; i++){
		printf("Elem[%d] => %d\n", i, array[i]);
	}
	
	// search key in array
	int key;
	printf("\n\tEnter a value to search : ");
	scanf("%d", &key);
	
	int *search_result = (int *) bsearch(&key, array, num_of_elem, sizeof(array[0]), compare_integer);
	
	if (search_result != NULL){
		printf("\tThe value %d was found!\n", *search_result);
	} else {
		printf("\tThe value was not found!\n");
	}
	return 0;
}

int compare_integer(const void *n1, const void *n2){
	return *(int *)n1 - *(int *) n2;
}
