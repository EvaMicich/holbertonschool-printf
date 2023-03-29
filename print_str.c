#include <stdio.h>
#include "main.h"

/**
 *print_str - prints a string, followed by a newline to stdout
 *@str: - char array string as input
 *Return: void
 */

int print_str(va_list args)
{
	char *str;
	int i;

	i = 0;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	return (i);
}
