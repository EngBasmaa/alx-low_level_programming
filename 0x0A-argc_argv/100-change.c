#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints its name, followed by a new line
 * @argv: the list of arguments
 * @argc: integer
 * Return: 0  (success)
*/

int main(int argc, char const *argv[])
{
	if (argc == 2)
	{
		int i = 0;
		int min_cents = 0;
		int money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i <= 4; i++)
		{
			if (money >= cents[i])
			{
				min_cents += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", min_cents);
	}else
	{
		printf("there is an error\n");
		return (1);
	}
	return (0);
}

