#include "main.h"
#include <unistd.h>

/**
 * _putchar - stdout is updated with the character 
 * @c: The printed character
 *
 * Return: On success 1.
 * On error, The value -1 is returned, and errno is suitably set.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
