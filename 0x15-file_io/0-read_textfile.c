#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: letters num the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes
 * the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t wrt;
	ssize_t rd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	rd = read(o, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	if (o == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);

	return (wrt);
}
