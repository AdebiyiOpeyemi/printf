#include "main.h"
/**
 * _putchar - write a character to stdout
 * @c: character to write
 * Return: 1 on success and -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
