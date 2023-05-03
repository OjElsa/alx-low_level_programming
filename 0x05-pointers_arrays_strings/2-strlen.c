#include <stdio.h>
#include "main.h"

/**
 *_strlen - checks the length of a string
 *@s: Description,  pointer to the string to calculate the length
 *@param s A pointer to the string to measure
 *Returns the length of the given string
 *Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
