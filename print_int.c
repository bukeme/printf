#include "main.h"

/**
 * _print_int -> prints number and calcuate count
 * @n: number
 */

void _print_int(int n)
{
	if (n / 10 != 0)
		_print_int(n / 10);
	if (n / 10 == 0 && n < 0)
		_putchar('-');
	_putchar(((n < 0) ? n * -1 : n) % 10 + '0');
}

/**
 * print_int -> calls _print_int function
 * @args: integer passed
 * Return: number of digits
 */

int print_int(va_list *args)
{
	int num = va_arg(*args, int);
	int count = 0;

	_print_int(num);
	while (num / 10)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
