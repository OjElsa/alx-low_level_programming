#include "main.h"

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
	if (str[i] != '0')
	j = 1;
	if (j || i == l - 1)
	_putchar(str[i]);
	i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addre;

	mulrem = addre = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
	mul = (n - '0') * (num[j] - '0') + mulrem;
	mulrem = mul / 10;
	add = (dest[k] - '0') + (mul % 10) + addre;
	addre = add / 10;
	dest[k] = add % 10 + '0';
	}
	for (addre += mulrem; k >= 0 && addre; k--)
	{
	add = (dest[k] - '0') + addre;
	addre = add / 10;
	dest[k] = add % 10 + '0';
	}
	if (addre)
	{
	return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
	if (av[x][y] < '0' || av[x][y] > '9')
	return (1);
	}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: string to initialize
 * @le: length of string
 *
 * Return: void
 */
void init(char *str, int le)
{
	int j;

	for (j = 0; j < le; j++)
	str[j] = '0';
	str[j] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */

int main(int argc, char *argv[])
{
	int l1, l2, cy, zx, x;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
	for (zx = 0; e[zx]; zx++)
	_putchar(e[zx]);
	exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	cy = l1 + l2 + 1;
	a = malloc(cy * sizeof(char));
	if (a == NULL)
	{
	for (zx = 0; e[zx]; zx++)
	_putchar(e[zx]);
	exit(98);
	}
	init(a, cy - 1);
	for (zx = l2 - 1, x = 0; zx >= 0; zx--, x++)
	{
	t = mul(argv[2][zx], argv[1], l1 - 1, a, (cy - 2) - x);
	if (t == NULL)
	{
	for (zx = 0; e[zx]; zx++)
	_putchar(e[zx]);
	free(a);
	exit(98);
	}
	}
	_print(a, cy - 1);
	return (0);
}
