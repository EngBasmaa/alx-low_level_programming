#include "main.h"
#include <stdio.h>


int actual_prime(int n, int i);
/**
 * is_prime_number - eturns 1 if the input integer is a prime number
 * @n: number of prime numbers
 * Return: boolean
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if the number is prime on recursive basis.
 * @n: number prime
 * @i: index number
 * Return: 1 if the number is prime; 0 otherwise
*/

int actual_prime(int n, int i)
{
	if (n % i == 0 && i > 0)
	{
		return (actual_prime(n, i - 1));
	}
	else
		return (1);
}
