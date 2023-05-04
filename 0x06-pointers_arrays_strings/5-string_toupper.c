#include <stdio.h>
#include "main.h"

/**
 *string_toupper: Changes all lowercase letters of a string to uppercase
 *@s: the string to be changed from uppercase to lowercase
 *Return: char
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
