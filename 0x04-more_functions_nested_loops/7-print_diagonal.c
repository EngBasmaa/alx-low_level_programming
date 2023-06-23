#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (space = 0; space <= i; space++)
		{
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
