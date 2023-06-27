#include "main.h"

/**
 * print_rev - print a reverse string
 *
 * @s: the string reversed
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	_putchar('\n');
}
