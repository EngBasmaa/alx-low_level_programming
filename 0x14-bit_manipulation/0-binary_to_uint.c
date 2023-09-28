#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t, power;
	int index;

	if (b == NULL)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	for (power = 1, t = 0, index--; index >= 0; index--, power *= 2)
	{
		if (b[index] == '1')
			t = t + power;
	}

	return (t);
}
