#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and print it to STDOUT.
 * @filename: reading a text file
 * @letters: the amount of letters that must be read
 * Return: w- real byte count read and printed
 *        When the function fails or the filename is NULL, the value is 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
