#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: First string
 * @s2: Second string
 * Return: Value less or greater than 0 or 0
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0, val;

	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}

	val = s1[count] - s2[count];
	return (val);
}

