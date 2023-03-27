#include <stdio.h>
#include "main.h"

/**
 * _atoi - string to an integer
 * @s: input
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int num = 0, val = 0, j = 0, k = 1, m = 1, i;

	while (*(s + num) != '\0')
	{
		if (val > 0 && (*(s + num) < '0' || *(s + num) > '9'))
			break;

		if (*(s + num) == '-')
			k *= -1;

		if ((*(s + num) >= '0') && (*(s + num) <= '9'))
		{
			if (val > 0)
				m *= 10;
			val++;
		}
		num++;
	}

	for (i = num - val; i < num; i++)
	{
		j = j + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (j * k);
}
