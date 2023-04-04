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
        int k = 0;

        while (s[k] != '\0' && s[k] != c)
	{
                k++;
	}
        if (s[k] == c)
	{
                return (&s[k]);
	}
        else
	{
                return (NULL);
	}
}
