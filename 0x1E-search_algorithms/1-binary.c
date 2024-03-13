#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: Index where the value is located, -1 otherwise
 * if array is NULL or the value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	int left = 0;
	int right = size - 1;
	int mid = left + (right - left) / 2;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= (size_t)right; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
