#include "main.h"

/**
 * _memcpy - copies src to dest
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of items to be copied
 *
 * Return: the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0 && (src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
		n--;
	}
	return (dest);
}
