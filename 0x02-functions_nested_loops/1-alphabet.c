#include "main.h"
/**
  *main -Entry point
  *Description; 'a function that prints the alphabet, in lowercase'
  *Return: always 0
  */

void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
}
