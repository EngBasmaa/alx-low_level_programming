#include <stdio.h>

/*
 * main - function for printing value updated of the pointer
 * @p: pointer
 * This is the main function of the program.
 * It performs on a,n,*p operations and returns an exit status
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * Return: always 0 (success)
*/
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
*/
	*(p + 5) = 98;
/* to print: 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
