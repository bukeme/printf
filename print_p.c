#include "main.h"

/**
 * print_p -> prints pointer address
 * @args: arguments passed
 * Return: count of characters printed
 */

int print_p(va_list *args)
{
	char *p = (char *) va_arg(*args, void *);
	int count = 0;

	while (*p)
	{
		_putchar(*p);
		p++;
		count++;
	}
	return (count);
}
