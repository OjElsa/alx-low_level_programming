#include "main.h"
/**
 *print_alphabet - prints alphabets in lowercase
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
}
