#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct fun to do
 * @s: the operator
 *
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int count = 0;

	while (ops[count].op)
	{
		if (strcmp(ops[count].op, s) == 0)
			return (ops[count].f);
		count++;
	}

	return (NULL);
}
