#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints length of string
 * @s: a string will be printed
 * Return: 0 (success)
*/

int _strlen_recursion(char *s)
{
	int length;

	if (*s != '0')
	{
		length += _strlen_recursion(s + 1);
		return (length);
	}
	else
		return (0);
}
