#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located.
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, left, right, jump_step;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);
	left = 0;
	right = jump_step;

	printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	while (right < size && array[right] < value)
	{
		left = right;
		right += jump_step;
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
