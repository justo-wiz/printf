#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @args: args of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list args)
{
	int precision = -1;
	int cr_i = *i + 1;

	if (format[cr_i] != '.')
		return (precision);

	precision = 0;

	for (cr_i += 1; format[cr_i] != '\0'; cr_i++)
	{
		if (is_digit(format[cr_i]))
		{
			precision *= 10;
			precision += format[cr_i] - '0';
		}
		else if (format[cr_i] == '*')
		{
			cr_i++;
			precision = va_arg(args, int);
			break;
		}
		else
			break;
	}

	*i = cr_i - 1;

	return (precision);
}
