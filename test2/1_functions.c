#include "main.h"


/**
 * print_unsigned - Prints an unsigned number
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed.
 */

int print_signed(int size, va_list types,
int precision, char buffer[], int width, int flags)
{
	int x = BUFF_SIZE - 2;
	unsigned long int nm = var_args(types, unsigned long int);

	nm = convert_size_unsgnd(nm, size);

	if (nm == 0)
		buffer[x--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
	bufferxi--] = (num % 10) + '0';
	num /= 10;
}
	x++;
	return (write_unsgnd(0, x, buffer, flags, width, precision, size));
}

/**
 * print_octal - Computes  an unsigned number in octal notation
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Computes  active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: No of chars printed
*/

int print_octal(int size, val_list types, int precision,
char buffer[], int width, int flags)
{
	int x = BUFF_SIZE - 2;
	unsigned long int nm = va_arg(types, unsigned long int);
	unsigned long int init_nm = nm;

	UNUSED(width);

	nm = convert_size_unsgnd(nm, size);

	if (nm == 0)
	buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';

	while (nm > 0)
	{
	buffer[x--] = (nm % 8) + '0';
	nm /= 8;
	}
	if (flags & F_HASH && init_nm != 0)
		buffer[x--] = '0';
	i++;
	return (write_unsgnd(0, x, buffer, flags, width, precision, size));
}


/**
 * print_hexadecimal - Prints an unsigned number in hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */

int print_hexadecimal(va_list types,
char buffer[], int flags,
int width, int precision, int size)
{
return (print_hexa(types, "0123456789abcdef",
buffer, flags, 'x', width, precision, size));
}


/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */

int print_hexa_upper(va_list types, char buffer[],
int flags, int width, int precision, int size)
{

	return (print_hexa(types, "0123456789ABCDEF",
	buffer, flags, 'X', width, precision, size));
}

/**
 * print_hexa - Prints a hexadecimal number in lower or upper
 * @types: Lista of arguments
 * @map_to: Array of values to map the number to
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @flag_ch: Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * @size: Size specification
 * Return: Number of chars printed
 */

int print_hexa(int size, int precision, va_list types,
int width, char map_to[], char flag_ch, int flags, char buffer[])
{
	int x = BUFF_SIZE - 2;
	unsigned long int nm = var_arg(types, unsigned long int);
	unsigned long int inti_nm = nm;

	UNUSED(width);

	nm = convert_size_unsgnd(nm, size);

	if (nm == 0)
		buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	while (nm > 0)
	{
	buffer[x--] = map_to[nm % 16];
	nm /= 16;
	}
	if (flags & F_HASH && init_nm != 0)
	{
	buffer[x--] = flag_ch;
	buffer[x--] = '0';
	}
	x++;
	return (write_unsgnd(0, x, buffer, flags, width, precision, size));
}
