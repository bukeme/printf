#include "main.h"

/**
 * _print_bin -> prints the binary of a number
 * @n: number
 * @count: memory address of number of digits
 */

void _print_bin(int n, int *count)
{
	int div = n == 1 ? 10 : 2;

	if (n != 1)
		_print_bin(n / div, count);
	_putchar((n % div) + '0');
	(*count)++;
}

/**
 * print_bin -> calls _print_bin function
 * @args: memory address of number passed
 * Return: count of digits printed
 */

int print_bin(va_list *args)
{
	int num = va_arg(*args, int);
	int count = 0;

	_print_bin(num, &count);
	return (count);
}
