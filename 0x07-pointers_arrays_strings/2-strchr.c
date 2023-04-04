#include "main.h"

/**
 * _strchr - locates character in a string and returns
 * @s: string to be looked in
 * @c: characther to be located
 *
 * Return:  the located character and z rest
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (int k = 0; s[k] != '\0' && s[k] != c; k++)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
