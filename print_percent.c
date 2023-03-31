#include <unistd.h>
#include "main.h"

/**
 * print_percent - writes the character '%' to stdout
 * @args: The character to print
 * Return: character count from _putchar
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_percent(__attribute__((unused))va_list args)
{
	return (_putchar('%'));
}
