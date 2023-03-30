#include "main.h"

/**
 * print_str -> print string
 * @args: arguments passed
 * Return: count
 */

int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}
