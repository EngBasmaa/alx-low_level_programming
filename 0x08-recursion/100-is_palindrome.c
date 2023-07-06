#include "main.h"
#include <stdio.h>

int check_pal(char *s, int i, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks for a palindrome string
 * @s: string will be reversed
 * Return:  returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate its length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: index number
 * @length: string length
 *
 * Return: 1 if palindrome, 0 if not
*/
int check_pal(char *s, int i, int length)
{
	if (i >= length)
	{
		return (1);
		return (check_pal(s, i + 1, length - 1));
	}
	else if (*(s + i) != *(s + length - 1))
	{
		return (0);
	}
}
