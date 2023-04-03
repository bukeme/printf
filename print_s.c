#include "main.h"

/**
 * print_s_cap -> prints a string
 * with custom modifier
 * @args: argumets
 * Return: count
 */

int print_s_cap(va_list *args)
{
	char *str = va_arg(*args, char *);
	int count = 0, temp;

	while (*str)
	{
		temp = *str;
		if ((temp > 0 && temp < 32) || (temp >= 127))
		{
			_putchar('\\');
			_putchar('x');
			if (temp > 0 && temp <= 10)
				_putchar(0 + '0');
			_printf("%x", temp);
			count = count + 2;
		}
		else
		{
			_putchar(*str);
		}
		count++;
		str++;
	}
	return (count);
}
