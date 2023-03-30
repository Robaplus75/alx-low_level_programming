#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}

	dest[len] = '\0';
	return (dest);
}
