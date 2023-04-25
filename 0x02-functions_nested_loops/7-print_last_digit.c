#include "main.h"
/**
 *print_last_digit - prints the last digits
 *
 *of a number
 *@n: input number as integer
 *
 *Return: last digit
 */

int print_last_digit(int n)
{
	int b;

	b = n % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
}
