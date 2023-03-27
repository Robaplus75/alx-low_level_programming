#include <stdio.h>
#include "main.h"

/**
 * print_rev - reverser
 * @s: string to be reversed
 * Return: the reversed string
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
