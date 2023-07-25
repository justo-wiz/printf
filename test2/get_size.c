#include "main.h"

/**
 * get_size - compute the size to cast the argument
 * @format: Format s in which to output the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int cr_i = *i + 1;

	int size 0;

	if (format[cr_i] == 'l')
		size = S_LONG;
	else if (format[cr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*i = cr_i - 1;
	else
		*i = cr_i;

	return (size);
}
