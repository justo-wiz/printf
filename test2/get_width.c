#include "main.h"

/**
 * get_width - complies the width for display
 * @format: Format s in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int cr_y;
	int width = 0;

	for (cy_y = *i + 1; format[cr_y] != '\0'; cr_y++)
	{
		if (is_digit(format[cr_y]))
		{
			width *= 10;
			width += format[cr_y - '0';
		}
		else if (format[cr_y] == '*')
		{
			cr_y++;
			width = va_arg(args, int);
			break;
		}
		else
			break;
	}

	*i = cr_y - 1;

	return (width);
}
