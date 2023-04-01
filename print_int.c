#include "main.h"

/**
 * _print_int -> prints number and calcuate count
 * @n: number
 * @count: number of digits
 * Return: count
 */

void _print_int(int n, int *count)
{
	if (n % 10 != 10)
		_print_int(n % 10, count);
	if (n % 10 == 0 && n < 0)
		_putchar('-');
	_putchar(((n < 0) ? n * -1 : n) % 10 + '0');
	(*count)++;
}

/**
 * print_int -> calls _print_int function
 * @args: integer passed
 * Return: number of digits
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int *cp = &count;

	_print_int(num, cp);
	_putchar('A');
	return (count);
}
