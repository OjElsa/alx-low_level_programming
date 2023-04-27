#include "main.h"
#include <stdio.h>
/**
 *print_line -prints a line
 *@n: variable
 *Return: 0
 */

void print_line(int n)
{
	int b = 0;

	while (b < n && n > 0)
	{
		_putchar('_');
		b++;
	}
	_putchar('\n');
}

