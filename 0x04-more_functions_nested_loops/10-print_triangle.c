#include "main.h"
#include <stdio.h>
/**
 *print_triangle - Entry point
 *Description: Prints diagonals
 *@size: size of the triangle
 *Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spcs;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spcs = size - row; spcs >= 1; spcs--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
