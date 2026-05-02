#include<stdio.h>
int main() {
	int array[7] = {11,12,13,14,16,17,18};
	int *ptr;
	int i;
	ptr = array;
	printf("Accessing array elements using pointers:\n");
	for(i=0; i<7; i++)
	{
		printf("Element %d =%d\n",i,*(ptr +i));
	}
	return 0;
}
