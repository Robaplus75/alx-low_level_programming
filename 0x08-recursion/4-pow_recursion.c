#include "main.h"

/**
 * _pow_recursion - power multiplier
 * @x: the number to be powered
 * @y: the number that powers
 *
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
