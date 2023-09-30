#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigined int
 * @b: number to be converted
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 * or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	return (0);

	while (*b)
	{
		if (*b == '0')
		{
			result <<= 1;
		}
		else if (*b == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}

	return (result);
}
