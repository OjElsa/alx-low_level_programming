#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - print numbers 0 to 9 except from 2 and 4
 *Description;
 *Return: void
 */

void print_most_numbers(void)
{
	char b = 0;

	while (b <= 9)
	{
		if (b != 2 && b != 4)
		{
			_putchar(b + '0');
		}

		b++;
	}
	_putchar('\n');
}
