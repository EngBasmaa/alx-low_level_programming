#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif;
	int cntr;

	dif = n ^ m;
	cntr = 0;

	while (dif)
	{
		cntr++;
		dif = dif & (dif - 1);
	}

	return (cntr);
}
