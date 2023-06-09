#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - brings back the sum of all its parameters.
 * @n: The function's parameter count.
 * @...: A variable number of parameters to add together.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
