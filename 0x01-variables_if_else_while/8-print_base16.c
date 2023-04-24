#include <stdio.h>

/**
* main - Print the numbers of base 16 in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char me;

	for (me = '0'; me <= '9'; me++)
	{
		putchar(me);
	}

	for (me = 'a'; me <= 'f'; me++)
	{
		putchar(me);
	}

	putchar('\n');

	return (0);
}
