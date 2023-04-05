#include "main.h"

/**
 * _print_rev_recursion - string in revsed order printer
 * @s: string to be reversed
 *
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
