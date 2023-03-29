#include <unistd.h>
#include "main.h"
/**
 * print_char - writes the character c to stdout
 * @args: The character to print
 * Return: character count from _putchar
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (_putchar(c));
}
