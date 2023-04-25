i#include "main.h"
/**
 *print_alphabet_x10 - Print the alphabet 10 times
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	int h;

	for (h = 1; i <= 10; i++)
	{
		for (h = 97; h <= 122; h++)
		{
			_putchar(h);

		}
		_putchar('\n');
	}
}
