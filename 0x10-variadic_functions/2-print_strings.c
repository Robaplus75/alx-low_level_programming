#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: the comma
 * @n: the number of arguments
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list strings;
		unsigned int i;
		char *str;

		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(strings, char*);

			if (str != NULL)
			{
				if (i == n - 1)
				{
					printf("%s", str);
					break;
				}
				printf("%s%s", str, separator);
			}
			else
			{
				printf("(nil)");
			}
		}
		printf("\n");
		va_end(strings);
	}
}
