#include "main.h"

/**
 * print_p -> prints pointer address
 * @args: arguments passed
 * Return: count of characters printed
 */

int print_p(va_list *args)
{
	void *void_p = va_arg(*args, void *);
	char p[100];
	int count = 0;

	sprintf(p, "%p", void_p);
	printf("%s\n", p);
	while (p[count])
	{
		_putchar(p[count]);
		count++;
	}
	return (count);
}
