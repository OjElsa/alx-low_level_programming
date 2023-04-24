#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hunids;
	int tens;
	int ones;

	for (hunids = 0; hunids <= 7; hunids++)
	{
		for (tens = hunids + 1; tens <= 8; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar(hunids + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (hunids < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}

