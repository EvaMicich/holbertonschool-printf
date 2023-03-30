#include "main.h"
#include <stddef.h>
#include <stdio.h>

int valid_specifier(va_list args, char test_sp, int *count)
{
	check_t check[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_dec},
		{"i", print_int},
		{"%", print_percent},
		{NULL, NULL}
	};
	int j;

	j = 0;
	while (check[j].sp != NULL)
	{
		if (*check[j].sp == test_sp)
		{
			*count = *count + (check[j].f)(args);
			return (1);
		}
		j = j + 1;
	}
	return (0);
}



/**
 *_printf - produces output according to a format
 *@format: pointer to format specifier
 *Return: char_count, the number of character printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
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
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_count = char_count + 1;
			i = i + 1;
			continue;
		}
		if (valid_specifier(args, format[i + 1], &char_count) == 0)
		{
			_putchar(format[i]);
			_putchar(format[i + 1]);
			char_count = char_count + 2;
		}
		if (format[i + 1] == '\0')
		{
			return (char_count);
		}
		i = i + 2;
	}
	va_end(args);
	return (char_count);
}
