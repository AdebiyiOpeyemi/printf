#include "main.h"
/**
 * print_char - prints a character
 * @arg_list: list of arguments recieved by the printf function
 * Return: 1 on sucess or 0 otherwise
 */
int print_char(va_list arg_list)
{
	char c;

	c = va_arg(arg_list, int);
	_putchar(c);
	return (1);
}
/**
 * print_string - print a string
 * @arg_list: list of arguments recieved by the printf function
 * Return: number of characters printed
 */
int print_string(va_list arg_list)
{
	int i;
	char *ptr;

	ptr = va_arg(arg_list, char *);
	if (ptr == NULL)
		return (-1);
	for (i = 0 ; ptr[i] != '\0' ; i++)
		_putchar(ptr[i]);
	return (i);
}
/**
 * print_percent - prints a percentage/modulo sign
 * @arg_list: printf arguments
 * Return: 1 on sucess
 */
int print_percent(__attribute__((unused)) va_list arg_list)
{
	_putchar('%');
	return (1);
}
