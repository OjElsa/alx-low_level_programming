#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  *main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *program_name = argv[0];
	char *last_slash = strrchr(program_name, '/');

	if (last_slash != NULL)
	{
		last_slash++;
	}
	else
	{
	last_slash = program_name;
	}

	for (int i = 0; last_slash[i] != '\0'; i++)
	{
	putchar(last_slash[i]);
	}
	putchar('\n');

		return (0);
}

