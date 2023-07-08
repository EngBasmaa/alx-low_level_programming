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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
