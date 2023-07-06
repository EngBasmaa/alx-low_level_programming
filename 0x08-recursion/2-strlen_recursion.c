#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints length of string
 * @s: string has the length
 * Return: 0 (success)
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
