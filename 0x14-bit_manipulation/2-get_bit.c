#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: Number to extract bit from
 * @index: index of the bit to extract
 * Return: Value of the bit at index, or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
