#include "main.h"
#include <stdio.h>
/**
 *print_numbers - print numbers
 *Return: void
 */

void print_numbers(void)
{
	char b = 0;

	while (b <= 9)
	{
		_putchar(b + '0');
		b++;
	}
	_putchar('\n');
}
