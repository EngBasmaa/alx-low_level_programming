#include "main.h"
#include <stdio.h>

/**
 * factorial - prints the factorial of a given number
 * @n: integer num
 * Return: 0 for sucess, -1 for less than 0 , 1 for equal 0
*/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (-1);
}
