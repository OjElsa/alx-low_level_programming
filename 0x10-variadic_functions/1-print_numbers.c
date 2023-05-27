#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int h;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
	separator = "";

	for (h = 0; h < n; h++)
	{
	printf("%d", va_arg(ap, int));
	if (h < n - 1)
	printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
