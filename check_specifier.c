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
	f d = {'d', print_int};
	f i = {'i', print_int};
	f n = {'\0', 0};
	f id_array[6] = {c, s, cent, d, i, n};
	int j;

	for (j = 0; id_array[j].id; j++)
	{
		if (id_array[j].id == format)
			return (id_array[j].id_func(args));
	}
	return (no_specifier(format));
}

