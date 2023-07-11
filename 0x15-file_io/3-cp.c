#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - A buffer of 1024 bytes is allocated.
 * @file: The name of the file buffer in which chars are stored.
 *
 * Return: A reference to the freshly allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - File descriptors are closed.
 * @fd: The file descriptor is about to be terminated.
 */

void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy the contents of one file to another.
 * @argc: The total number of arguments passed to the program.
 * @argv: An array of arguments pointers.
 *
 * Return: 0 for achievement.
 *
 * Description: If the argument count is wrong, exit code 97 is returned.
 * Exit code 98 if file_from does not exist or cannot be read.
 * If file_to cannot be created or written to, exit code 99 is returned.
 * If file_to or file_from cannot be closed, exit code 100 is returned.
 */

int main(int argc, char *argv[])
{
	int from, to, f, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	f = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || f == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, f);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		f = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (f > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
