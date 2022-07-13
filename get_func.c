#include "main.h"
/**
 * get_func - match the format specifier in the main string
 * @format: string to be printed that contains the format specifiers
 * @arg_list: list of arguments recieved by the varidic function (_printf)
 * @func_list: array of specifier and functions
 * Return: number of chracters printed
 */
int get_func(const char *format, va_list arg_list, fmt_struct func_list[])
{
	int i, j, num = 0, char_printed = 0;

	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_printed += 1;
		}
		else
		{
			for (j = 0 ; format[i + 1] != '\0' ; j++)
			{
				if (format[i + 1] == func_list[j].fmt[0])
				{
					num = func_list[j].func(arg_list);
					if (num == -1)
						return (-1);
					char_printed += num;
					i++;
					break;
				}
			}
			if (func_list[j].fmt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					char_printed += 2;
					i++;
				}
				else
					return (-1);
			}
		}
	}
	if (format == NULL)
		return (-1);
	return (char_printed);
}
