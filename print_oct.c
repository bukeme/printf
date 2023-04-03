#include "main.h"

/**
 * _print_oct -> prints oct value of number
 * @n: number
 * @count: number of octal digits
 */

void _print_oct(unsigned int n, int *count)
{
	unsigned int div = n >= 8 ? 8 : 10;

	if (n >= 8)
		_print_oct(n / div, count);
	_putchar((n % div) + '0');
	(*count)++;
}

/**
 * print_oct -> calls _print_oct function
 * @args: argument passed
 * Return: number of digits printed
 */

int print_oct(va_list *args)
{
	unsigned int num = va_arg(*args, unsigned int);
	int count = 0;

	_print_oct(num, &count);
	return (count);
}
