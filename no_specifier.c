#include "main.h"

/**
 * no_specifier -> prints format
 * when specifier doesn't match
 * @format: format
 * Return: count
 */

int no_specifier(char format)
{
	_putchar('%');
	_putchar(format);
	return (2);
}
