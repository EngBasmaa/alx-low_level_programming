#include "main.h"

/**
 * infinite_add - add two numbers.
 *
 * @n1: the first number
 * @n2: the second number
 * @r: the result
 * @size_r: result size
 * Return: add of n1 and n2
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int add = 0, length1, length2, x, y;

	for (length1 = 0; n1[length1]; length1++)
	;
	for (length2 = 0; n2[length2]; length2++)
	;
	if (length1 > size_r || length2 > size_r)
	return (0);
	length1--;
	length2--;
	size_r--;
	for (x = 0; x < size_r; x++, length1--, length2--)
	{
		if (length1 >= 0)
			add += n1[length1] - '0';
		if (length2 >= 0)
			add += n2[length2] - '0';
		if (length1 < 0 && length2 < 0 && add == 0)
			break;
		r[x] = add % 10 + '0';
		add /= 10;
	}
	r[x] = '\0';
	if (length1 >= 0 || length2 >= 0 || add)
		return (0);
	for (x--, y = 0; x > y; x--, y++)
	{
		add = r[x];
		r[x] = r[y];
		r[y] = add;
	}
	return (r);
}
