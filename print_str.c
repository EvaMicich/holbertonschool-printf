#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 *print_str - prints a string, followed by a newline to stdout
 *@args: va_list input
 *Return: character count
 */

int print_str(va_list args)
{
	char *str;
	int i;
	char *error_msg;

	i = 0;
	error_msg = "(null)";
	str = va_arg(args, char *);
	if (str == NULL)
	{
		while (error_msg[i] != '\0')
		{
			_putchar(error_msg[i]);
			i = i + 1;
		}
		return (6);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	return (i);
}
