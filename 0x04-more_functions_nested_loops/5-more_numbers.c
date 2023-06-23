#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int num, row, counter;

	for (row = 1; row <= 10; row++)
	{
		for (counter = 0; counter < 15; counter++)
		{
			num = counter;
			if (counter > 9)
			{
				_putchar(1 + 48);
				num = counter % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
