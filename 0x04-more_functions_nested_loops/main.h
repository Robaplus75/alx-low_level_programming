#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c)
{
	write(1, &c, 1);
}
void print_number(int n);

#endif /*MAIN_H */
