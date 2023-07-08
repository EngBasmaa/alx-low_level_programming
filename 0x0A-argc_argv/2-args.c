#include "stdio.h"

/**
 * main -  prints all arguments it receives..
 * @argv: the list of arguments
 * @argc: integer
 * Return: 0  (success)
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	int i = 0;

	do {
	printf("%s\n", argv[i]);
	i++;
	} while (argc--);
	return (0);
}
