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
	char *error1 = "Segmentation fault";

	va_start(args, format);
	if (!*p)
	{
		while (*error1)
		{
			_putchar(*error1);
			error1++;
			count++;
		}
		return (count);
	}
	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			if (!(*p))
				return (0);
			count += check_specifier(*p, &args);
		}
		else
		{
			count += _putchar(*p);
		}
		p++;
	}
	va_end(args);
	return (count);
}

