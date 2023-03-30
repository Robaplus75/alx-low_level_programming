#include "main.h"
/**
 * rot13 - encodes z string
 * @s: string.
 * Return: s.
 */

char *rot13(char *s)
{
	int c = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + c) != '\0')
	{

		for (i = 0; i < 52; i++)
		{
			if (*(s + c) == letters[i])
			{
				*(s + c) = rot13[i];
				break;
			}
		}
		c++;
	}

	return (s);
}
