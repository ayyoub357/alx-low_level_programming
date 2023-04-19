#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - The sum of two numbers is returned.
 * @a: The first digit.
 * @b: The second digit.
 *
 * Return: The product of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The difference between two numbers is returned.
 * @a: The first digit.
 * @b: The second digit.
 *
 * Return: The difference between a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The product of two numbers is returned.
 * @a: The first digit.
 * @b: The second digit.
 *
 * Return: The sum of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The division of two numbers is returned.
 * @a: The first digit.
 * @b: The second digit.
 *
 * Return: The sum of letters a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives back the leftovers from dividing two numbers.
 * @a: The first digit.
 * @b: The second digit.
 *
 * Return: the remaining result after dividing a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
