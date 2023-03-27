#include <stdio.h>

/**
 * _strlen - spits out the length
 * @s: string
 * Return: the string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
