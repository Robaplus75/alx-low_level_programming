#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: formats
 * Return: none
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, k = 0, n = 0;
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
            n+=1;
			break;
		case 'i':
			printf("%d", va_arg(list, int));
            n+=1;
			break;
		case 'f':
			printf("%f", va_arg(list, double));
            n+=1;
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
            n+=1;
			break;
		}
		if ((format[i + 1] == 'c' || format[i + 1] == 'i'
		|| format[i + 1] == 'f' || format[i + 1] == 's')
        && n>0)
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}

int main(){
    print_all("mnbvfqcepolsbxzi",3.144,'H',"robaplus",0);
    return 0;
}