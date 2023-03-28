#include "main.h"
#include <stdio.h>

/**
 *_strlen -returns lenght of a string
 *@s: char type lenght of string
 *Return: (n) lenght of string
 */

int _strlen(char *s)
{
	int n;

	n = 0;

	while (*s != '\0')
	{
		s = s + 1;
		n = n + 1;
	}
	return (n);
}
