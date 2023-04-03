#include "main.h"

/**
 * _print_x -> prints hexadecimal of n
 * @n: number
 * @array: array
 * @count: count memory address
 */
 

void _print_x(unsigned int n, xf array[], int *count)
{
	unsigned int div = 16;
	int rmd = n == 10 ? 10 : n % div, j;

	if (n >= 16)
		_print_x(n / 16, array, count);
	if (rmd >= 10)
	{
		for (j = 0; j < 6; j++)
		{
			if (array[j].i == rmd)
			{
				_putchar(array[j].c);
				break;
			}
		}
	}
	else
	{
		_putchar(rmd + '0');
	}
	(*count)++;
}

/**
 * print_x -> calls _print_x function
 * @args: argumets passed
 * Return: count of characters printed
 */

int print_x(va_list *args)
{
	unsigned int num = va_arg(*args, unsigned int);
	int count = 0;
	xf x_array[6];

	xf a = {10, 'A'};
	xf b = {11, 'B'};
	xf c = {12, 'C'};
	xf d = {13, 'D'};
	xf e = {14, 'E'};
	xf f = {15, 'F'};

	x_array[0] = a;
	x_array[1] = b;
	x_array[2] = c;
	x_array[3] = d;
	x_array[4] = e;
	x_array[5] = f;

	_print_x(num, x_array, &count);
	return (count);
}
