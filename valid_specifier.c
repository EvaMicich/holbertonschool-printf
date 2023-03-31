#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 *valid_specifier - checks validity of specifier against list
 *@args: va_list
 *@test_sp: specifier to check against
 *@count: character counter
 *Return: 0 on fail, 1 on success
 */

int valid_specifier(va_list args, char test_sp, int *count)
{
	check_t check[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
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
