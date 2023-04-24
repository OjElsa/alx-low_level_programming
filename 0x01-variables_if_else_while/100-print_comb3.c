#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;
	int c;

	for (b = 0; b <= 9; b++)
	{
		for (c = b + 1; c <= 9; c++)
		{
			putchar(b + '0');
			putchar(c + '0');

			if (b < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
