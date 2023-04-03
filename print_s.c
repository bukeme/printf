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
	int count = 0, temp = *str;

	while (*str)
	{
		if ((temp > 0 && temp < 32) || (temp >= 127))
		{
			_putchar('\\');
			_putchar('x');
			_printf("%b", temp);
			count = count + 2;
		}
		else
		{
			_putchar(*str);
		}
		count++;
	}
	return (count);
}
