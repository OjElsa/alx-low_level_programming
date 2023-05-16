#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup- returns a pointer to a copy of the string
 * @str: string to be copied
 * Return: s
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (strlen(str) + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
