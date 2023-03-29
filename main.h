#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

typedef struct check
{
	char *sp;
	int(*f)(va_list);
} check_t;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int print_str(va_list args);
int print_char(va_list args);

#endif /* _MAIN_H_ */
