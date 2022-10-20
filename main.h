#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *c))(va_list);

/**
 * struct print - struct for the character specifier
 * @ch: character to compare
 * @f: function to print va_list argument
 */

typedef struct print
{
	char *ch;
	int (*f)();
}print_f;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_dec(va_list);
int print_int(va_list);
int _putchar(char c);

#endif
