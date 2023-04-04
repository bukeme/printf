#include "main.h"

/**
 * check_specifier -> calls function
 * of matched specifier
 * @format: format
 * @args: arguments passed
 * Return: count
 */

int check_specifier(char format, va_list *args)
{
	f c = {'c', print_char}, s = {'s', print_str};
	f cent = {'%', print_cent}, d = {'d', print_int};
	f i = {'i', print_int}, b = {'b', print_bin};
	f u = {'u', print_uint}, o = {'o', print_oct};
	f x = {'x', print_x}, s_cap = {'S', print_s_cap};
	f x_cap = {'X', print_x}, p = {'p', print_p};
	f n = {'\0', 0};
	f id_array[13];
	int j;

	id_array[0] = c;
	id_array[1] = s;
	id_array[2] = cent;
	id_array[3] = d;
	id_array[4] = i;
	id_array[5] = b;
	id_array[6] = u;
	id_array[7] = o;
	id_array[8] = x;
	id_array[9] = s_cap;
	id_array[10] = x_cap;
	id_array[11] = p; 
	id_array[12] = n;

	for (j = 0; id_array[j].id; j++)
	{
		if (id_array[j].id == format)
			return (id_array[j].id_func(args));
	}
	return (no_specifier(format));
}

