#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}

	dest[len] = '\0';
	return (dest);
}
