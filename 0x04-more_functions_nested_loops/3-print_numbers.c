#include "main.h"

/**
 * print_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int num = 0;

	do {
		(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
