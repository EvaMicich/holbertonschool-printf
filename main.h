#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
/**
 *struct check - struct used to match user inoput with function
 *@sp: the specifier
 *@f: associated function
 */

typedef struct check
{
	char *sp;
	int (*f)(va_list);
} check_t;

int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int valid_specifier(va_list args, char test_sp, int *count);
int print_str(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
#endif /* _MAIN_H_ */
