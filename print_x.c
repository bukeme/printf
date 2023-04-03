#include "main.h"

 

int _print_x(int n, xf array, int *count)
{
	int div = n >= 16 ? 16 : 10;
	int rmd = n % div, i;

	if (n >= 16)
		_print_x(n / 16, array, count);
	if (rmd >= 10)
	{
		for (i = 0; i < 6; i++)
		{
			if (x_array[i].i == rmd)
			{
				_putchar(x_array[i].c);
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

int print_x(va_list *args)
{
	int num = va_arg(*args, int);
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

	_print_x(num, array, &count);
	return (count);
}
