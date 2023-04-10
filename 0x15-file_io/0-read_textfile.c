#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - A function that reads a text
 * file and prints
 * @filename: variable pointer
 * @letters: size letters
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fed = 0;
	int reads = 0;
	int opt = 0;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	fed = open(filename, O_RDONLY);
	if (fed == -1)
	{
		free(buff);
		return (0);
	}

	reads = read(fed, buff, letters);
	if (reads == -1)
	{
		free(buff);
		return (0);
	}

	opt = write(STDOUT_FILENO, buff, reads);
	if (opt == -1 || opt != reads)
	{
		free(buff);
		return (0);
	}
	close(fed);
	free(buff);
	return (opt);
}
