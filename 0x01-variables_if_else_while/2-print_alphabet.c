#include <stdio.h>


/**
 * main - entry point
 * Description: Use `putchar` function to print the alphabet in lowercase
 * Return: 0 - (success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

