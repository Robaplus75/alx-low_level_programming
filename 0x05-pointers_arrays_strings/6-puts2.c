#include <stdio.h>

/**
 * puts2 - prints every other number
 * @str: string to be printed
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (n <= i)
	{
		putchar(str[n]);
		n += 2;
	}
	putchar('\n');
}
