#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_int - prints an int
 * @args: va_list type to iterate through
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	long int num;
	char str[20];
	long int i;
	long int j;
	long int count;

	num = va_arg(args, int);
	i = 0;
	j = 0;
	count = 0;
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count = count + 1;
	}
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i = i + 1;
		count = count + 1;
		continue;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(str[j]);
		j = j - 1;
	}
	return (count);
}
