#include <stdio.h>

/**
 * main - main block.
 * Description:You are not allowed to use any variable of type char.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` twice.
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
