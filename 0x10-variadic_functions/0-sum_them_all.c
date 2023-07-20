#include "variadic_functions.h"

/**
 * sum_them_all - returns the summition of all its parameters.
 * @n: amount of the arguments.
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list_0;
	unsigned int i;
	int summ = 0;

	if (n == 0)
		return (0);

	va_start(list_0, n);

	for (i = 0; i < n; i++)
		summ += va_arg(list_0, const unsigned int);

	va_end(list_0);

	return (summ);
}
