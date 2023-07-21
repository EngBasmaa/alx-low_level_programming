#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str_3, *sep_3 = "";

	va_list list_3;

	va_start(list_3, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep_3, va_arg(list_3, int));
					break;
				case 'i':
					printf("%s%d", sep_3, va_arg(list_3, int));
					break;
				case 'f':
					printf("%s%f", sep_3, va_arg(list_3, double));
					break;
				case 's':
					str_3 = va_arg(list_3, char *);
					if (!str_3)
						str_3 = "(nil)";
					printf("%s%s", sep_3, str_3);
					break;
				default:
					i++;
					continue;
			}
			sep_3 = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list_3);
}
