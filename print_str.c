#include <stdio.h>
#include "main.h"

/**
 *print_str - prints a string, followed by a newline to stdout
 *@str: - char array string as input
 *Return: void
 */

void print_str(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
