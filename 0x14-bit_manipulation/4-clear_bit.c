#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal number to change
 * @index: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num1;
	unsigned int num2;

	if (index > 64)
		return (-1);
	num2 = index;
	for (num1 = 1; num2 > 0; num1 *= 2, num2--)
		;

	if ((*n >> index) & 1)
		*n -= num1;

	return (1);
}
