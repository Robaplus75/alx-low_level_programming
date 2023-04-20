#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: formats
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, k = 0;
	char *str;

	while (format[k] != '\0')
	{
		k++;
	}
	va_start(list, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		}
		if (format[i + 1] == 'c' || format[i + 1] == 'i'
		|| format[i + 1] == 'f' || format[i + 1] == 's')
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
