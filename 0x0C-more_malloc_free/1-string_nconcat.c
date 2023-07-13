#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates n bytes of a string to another
 * @s1: string to append to it
 * @s2: string to concatenate from it
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_s;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		ptr_s = malloc(sizeof(char) * (l1 + n + 1));
	else
		ptr_s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!ptr_s)
		return (NULL);

	while (i < l1)
	{
		ptr_s[i] = s1[i];
		i++;
	}

	while (n < l2 && i < (l1 + n))
		ptr_s[i++] = s2[j++];

	while (n >= l2 && i < (l1 + l2))
		ptr_s[i++] = s2[j++];

	ptr_s[i] = '\0';

	return (ptr_s);
}
