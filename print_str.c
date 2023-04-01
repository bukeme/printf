#include "main.h"

/**
 * print_s -> prints string
 * @s: string
 * @count: number of characters
 */

void print_s(char *s, int *count)
{
	while (*s)
	{
		_putchar(*s);
		s++;
		(*count)++;
	}
}

/**
 * print_str -> print string
 * @args: arguments passed
 * Return: count
 */

int print_str(va_list *args)
{
	char *s = va_arg(*args, char *);
	int count = 0;

	if (!s)
	{
		print_s("(null)", &count);
		return (count);
	}
	print_s(s, &count);
	return (count);
}

