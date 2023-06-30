#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer printed
 * Return: return value of dest
 */

void print_number(int n)
{
	unsigned int n_;

	if (n < 0)
	{
		n_ = -n;
		_putchar('-');
	} else
	{
		n_ = n;
	}

	if (n_ / 10)
		print_number(n_ / 10);

	_putchar((n_ % 10) + '0');
}
