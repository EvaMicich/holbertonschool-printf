#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

typedef struct check
{
	char *op;
	void(*f)(va_list args);
} check_t;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
void print_str(char *str);

#endif /* _MAIN_H_ */
