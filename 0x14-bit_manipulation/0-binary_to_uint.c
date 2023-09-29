#include "main.h"


/**
 * binary_to_int - converts a binary number to an unsigined int
 * @b: number to be converted
 * Return:0 incase of failure or an unsigned int
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
