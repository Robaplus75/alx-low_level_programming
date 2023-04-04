#include "main.h"

/**
 * _memset - replaces the first n elements by b
 * @s: string to be replced or filled
 * @b: characher to use
 * @n: number of items to be replaced
 *
 * Return: the replaced string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
