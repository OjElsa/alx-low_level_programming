#include "main.h"
#include <stdio.h>
/**
 *
 *more_numbers - prints numbers 0 - 14 ten times
 *Return: void
 */

void more_numbers(void)
{
	char l, a;
	int p = 0;

	while (p < 10)
	{
		for (l = 0; l <= 14; l++)
		{
			a = l;
			if (l > 9)
			{
				_putchar('1');
				a = l % 10;
			}
			_putchar('0' + a);
		}
		_putchar('\n');
		p++;
	}
}
