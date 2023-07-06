#include "main.h"
#include <stdio.h>

/**
 * func_square_recursion - returns the natural square root of a number
 * @n: number
 * @i: number squared
 * Return: -1 when n is not natural number
*/

int func_square_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
		return (func_square_recursion(n, i + 1));
	}
	else
		return (-1);
}
