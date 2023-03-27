#include <stdio.h>

/**
 * puts2 - prints every other number
 * @str: string to be printed
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (int n = 0; n <= i; n += 2)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
