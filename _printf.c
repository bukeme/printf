#include "main.h"

/**
 * _printf -> performs almost same thing as
 * c printf library
 * @format: format of arguments
 * Return: number of items printed
 */

int _printf(const char *format, ...)
{
	const char *p = format;
	va_list args;
	int count = 0;
	char *str;

	va_start(args, format);

	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			count += check_specifier(*p, args);
		}
		else
		{
			count += _putchar(*p);
		}
		p++;
	}
	return (count);
}
