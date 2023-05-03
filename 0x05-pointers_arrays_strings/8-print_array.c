#include <stdio.h>
#include "main.h"

/**
 *print_array - print 'n' of an array of integers
 *@a: int type array of pointer
 *@n: int type integer
 *Description: numbers must be seperated by a coma and space
 *Numbers should be displayed in the same order they're stored in an array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
