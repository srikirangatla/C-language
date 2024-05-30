#include <stdio.h>

int main ( )
{
	int *ptr1 = NULL;
	int *ptr2 = NULL;

	int arr[2];

	ptr2++;

	int my_size_1, my_size_2;

	my_size_1 = (char *)ptr2 - (char *)ptr1;

	my_size_2 = (void *)&arr[1] - (void *)&arr[0];

	printf ( " size with pointer: %d \n size with array: %d \n", my_size_1, my_size_2 );

	return 0;
}

/* output
 *
 size with pointer: 4
 size with array: 4
 *
 * */
