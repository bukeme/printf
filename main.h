#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct func -> contains data types
 * char and function pointer
 * @id: format (character)
 * @id_func: function pointer for format
 */

typedef struct func
{
	char id;
	int (*id_func)(va_list *);
} f;

int _putchar(char c);
int _printf(const char *format, ...);
int check_specifier(char format, va_list *);
int print_str(va_list *);
int print_char(va_list *);
int print_cent(va_list *);
int no_specifier(char format);
int print_int(va_list *);

#endif

