#include <stdio.h>

/**
 * rev_string - reverser
 * @s: string to be reversed
 * Return: the reversed string
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i != -1)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
