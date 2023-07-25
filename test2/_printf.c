#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format
 * Return: Printd chars.
 */

int _printf(const char *format, ...)
{
	int width, size, buff_ind, flags, precision = 0;

	print_fo, int y = 0, printd_chars = 0;

	va_list args;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (y = 0; format && format[y] != '\0'; i++)
	{
		if (format[y] != '%')
		{
			buffer[buff_d++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printd_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_d);
			flags = get_flags(format, &y);
			width = get_width(format, &y, args);
			precision = get_precision(format, &y, args;
					size = get_size(format, &y);
					++y;
					print_fo = handle_print(format, &y, args, buffer,
						flags, width, precision, size);
					if (printd == -1)
					return (-1);
					printd_chars += print_fo;
					}
					}
					print_buffer(buffer, &buff_ind);
					va_end(args);
					return (printd_chars);
					}

/**
 * print_buffer - Outputs the details of the buffer ? exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, reps the len
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_d > 0)
		write(1, &buffer[0], *buff_d);
	*buff_d = 0;
}
