#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - makes the appropriate function choice
 *               the user's requested action.
 * @s: the argument provided to the operator.
 *
 * Return:a reference to the relevant function
 *         the parameter supplied to the operator.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
