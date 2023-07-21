#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - a function which will print strings
 * @separator: string to be printed between words
 * @n: number of strings passed to the function
 * Return: void (0) on sucess
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

		while (i--)
		{
			printf("%s%s", (str = va_arg(args, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
		}
	va_end(args);
}
