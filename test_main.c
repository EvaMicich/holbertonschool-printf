#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n"); /*test the counter of _printf*/
	len2 = printf("Let's try to printf a simple sentence.\n"); /* test counter of real printf*/
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
/*	_printf("Length:[%d, %i]\n", len, len); wont work yet, need to handle %d/i in code*/
	printf("Length:[%d, %i]\n", len2, len2); /*prints the length measured by real printf*/
	printf("Length:[%d, %i]\n", len, len); /*prints the length measured by _printf*/
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
/*	len = _printf("Percent:[%%]\n"); edge cases
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n"); */
	return (0);
}
