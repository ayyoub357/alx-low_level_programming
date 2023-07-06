#include "main.h"
#include <unistd.h>

/**
 * _putchar - stdout receives the character c
 * @c: The character to be printed
 *
 * Return: On the first success
 * On error, The value -1 is returned, and errno is suitably set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
