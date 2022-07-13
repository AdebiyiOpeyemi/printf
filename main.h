#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct fmt_struct - structure for specifier and functions
 * @fmt: specifier pointer
 * @func: function pointer
 */
struct fmt_struct
{
	char *fmt;
	int (*func)(va_list);
};
typedef struct fmt_struct fmt_struct;

/* Main functions */
int _putchar(char c);
int _printf(const char *format, ...);
int get_func(const char *format, va_list arg_list, fmt_struct func_list[]);
int print_string(va_list);
int print_char(va_list);
int print_percent(va_list);
#endif
