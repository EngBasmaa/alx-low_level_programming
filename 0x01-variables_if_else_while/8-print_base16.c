#include <stdio.h>

/* main - entry point
 *
 * description -  Hexadecimal
 *
 * return (0) - (success) 
*/

int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
