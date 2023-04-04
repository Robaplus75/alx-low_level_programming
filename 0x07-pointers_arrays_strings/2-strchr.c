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
	int k = 0;
	char word[100];
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			int j = 0;
			k++;
			while (s[i] != '\0')
			{
				*(word+j) = s[i];
				j++;
			}
			break;
		}
		i++;
	}
	if (k == 0)
	{
		return (NULL);
	}
	else
	{
		for (int m = 0; word[m] != '\0'; m++)
		{
			*(s + m) = *(word + m);
		}
		return (s);
	}
}
