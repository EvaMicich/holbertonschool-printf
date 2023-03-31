#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

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
	if (format == NULL || strcmp(format, "%") == 0)
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
