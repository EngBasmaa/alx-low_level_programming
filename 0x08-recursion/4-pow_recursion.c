#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns power of integer
 * @x: the base integer
 * @y: the power integer
 * Return: 0 for success , 1 for y = 0 , -1 for y less than 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
