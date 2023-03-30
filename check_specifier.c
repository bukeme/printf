#include "main.h"

/**
 * check_specifier -> calls function
 * of matched specifier
 * @format: format
 * @args: arguments passed
 * Return: count
 */

int check_specifier(char format, va_list args)
{
	f c = {'c', print_char};
	f s = {'s', print_str};
	f cent = {'%', print_cent};
	f n = {'\0', (void *)NULL};
	f id_array[4] = {c, s, cent, n};
	int i;

	for (i = 0; id_array[i].id; i++)
	{
		if (id_array[i].id == format)
			return (id_array[i].id_func(args));
	}
	return (no_specifier(format));
}
