#include <unistd.h>

/**
 * _putchar -> prints a character
 * @c: character
 * Return: number of character printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

