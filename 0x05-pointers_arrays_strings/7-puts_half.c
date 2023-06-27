#include "main.h"

/**
 * puts_half - print half of a string
 * @str: a string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(str[i]);
	}
}
