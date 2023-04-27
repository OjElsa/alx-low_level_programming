#include "main.h"
#include <stdio.h>
/**
 *print_number - Function that prints an integer
 *@n:the integer to be printed
 *This function prints the integer passed as argument
 *using only the _putchar function
 *If the integer is negative, a
 *Return: void
 */

void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar(45);
		x = -n;
	}
	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
