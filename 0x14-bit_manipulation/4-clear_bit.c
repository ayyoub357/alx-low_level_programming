#include "main.h"

/**
 * clear_bit - changes the value of a specified bit to 0
 * @n: pointer to the number to be altered
 * @index: the index of the bit to be cleared
 *
 * Return: 1 for accomplishment, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
