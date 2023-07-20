#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: return numbers with seperators
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_1;

	unsigned int i = n;

	va_start(list_1, n);

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list_1, n);

	while (i--)
		printf("%d%s", va_arg(list_1, int),
				i ? (separator ? separator : "") : "\n");
	va_end(list_1);
}
