#include "main.h"

/**
 * print_n -> prints number
 * @n: number
 * @count: number of digits
 */

void print_n(unsigned int n, int *count)
{
	if (n / 10 != 0)
		print_n(n / 10, count);
	_putchar((n % 10) + '0');
	(*count)++;
}

/**
 * print_uint -> calls print_n function
 * @args: unsigned int passed
 * Return: number of digits
 */

int print_uint(va_list *args)
{
	unsigned int num = va_arg(*args, unsigned int);
	int count = 0;

	print_n(num, &count);
	return (count);
}
