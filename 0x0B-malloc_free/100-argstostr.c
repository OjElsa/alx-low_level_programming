#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of program
 * @ac: no. of args.
 * @av: pointer to pointer to int char (2nd)
 * Return: pointer to new string.
 */

char *argstostr(int ac, char **av)
{
	int h, w, m = 0, n = 0;
	char *str;

	/* check to see if no. of args <= 0 or av is null */
	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	/* loop through elements on row*/
	for (h = 0; h < ac; h++)
	{
		/* loop through elements on col*/
		for (w = 0; av[h][w]; w++)
			n++; /* increment for each element on a given row */
	}

	n += ac + 1; /* add space for \0 */
	str = malloc(sizeof(char) * n); /* allocate memo for string */

	if (str == NULL)
	{
		return (NULL);
	}
	/* write to new string, row and col */
	for (h = 0; h < ac; h++)
	{
		for (w = 0; av[h][w]; w++) /* write each row */
		{
			str[m++] = av[h][w];
		}
		str[m++] = '\n'; /* add new line after each row */
	}
	str[m] = '\0';  /*apend \0 char to last row */
	return (str);
}
