#include "main.h"
#include <stdio.h>

/**
 * power_operation_test - returns the natural square root of a number.
 * @n: input number.
 * @p: iteraterative number
 * Return: -1 when n is not natural number
*/
int power_operation_test(int n, int p)
{
	if (p * p == n)
		return (p);
	if (p * p > n)
		return (-1);
	return (power_operation_test(n, p + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation_test(n, 2));
/*to start from 2*2=4 and use sqrt(4) and then increment it*/
}
