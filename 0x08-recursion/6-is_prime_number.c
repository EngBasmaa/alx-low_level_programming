#include "main.h"
#include <stdio.h>

int testing_prime(int n, int d);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: input number as prime
 * Return: boolean
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (testing_prime(n, n - 1));
}

/**
 * testing_prime - calculates if the number is prime on recursive basis.
 * @n: input number as prime
 * @d: index number on which the input number will be divided
 * Return: 1 if the number is prime; 0 otherwise
*/

int testing_prime(int n, int d)
{
		if (d == 0)
			return (1);
		if (d == 1)
			return (1);
		if (n % d == 0)
			return (0);
}
