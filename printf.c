#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 *_printf - produces output according to a format
 *@format: pointer to format specifier
 *Return: char_count, the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	check_t check[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	int i;
	int j;
	int char_count;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}

	i = 0;
	char_count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (check[j].sp != NULL)
			{
				if (*check[j].sp == format[i + 1])
				{
					char_count = char_count + (check[j].f)(args);
				}
				j = j + 1;
			}
			i = i + 2;
		}
		_putchar(format[i]);
		i = i + 1;
		char_count = char_count + 1;
	}
	return (char_count);
}
