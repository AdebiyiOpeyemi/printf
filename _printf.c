#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - produces output according to format
 * @format: string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int char_printed;
	fmt_struct func_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	/* calling the get_func function */
	char_printed = get_func(format, arg_list, func_list);
	va_end(arg_list);
	return (char_printed);
}
