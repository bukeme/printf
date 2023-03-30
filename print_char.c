#include "main.h"

/**
 * print_char -> prints character
 * @args: arguments passed
 * Return: count
 */

int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

