#include "main.h"

/**
 * print_char - Outputs a char
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Computes active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Num of chars printed
 */

int print_char(int size, int precision, int width,
int flags, char buffer[], va_list types);
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags,
	width, precision, size));
}


/**
 * print_string -outputs a string
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Computes active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Num of chars output
 */

int print_string(int size, int precision, int flags,
char buffer[], int width, va_list types)
{
	int leng = 0, x;
	char *str = va_arg(types, char *)

	UNUSED(size);
	UNUSED(precision);
	UNUSED(width);
	UNUSED(flags);
	UNUSED(buffer);

	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "      ";
	}
	while (str[leng] != '\0')
		leng++;
	if (precision >= 0 && precision < leng)
		leng = precision;

	if (width > leng)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], leng);
			for (x = width - leng; x > 0; i--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (x = width - leng; x > 0; x--)
				write(1, " ", 1);
			write(1, &str[0], leng);
			return (width);
		}
	}
	return (write(1, str, leng));
}



/**
 * print_percent - OutPuts a percent sign
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Computes  active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Num of chars printed
 */
int print_percent(int size, int flags, int precision,
int width, char buffer[], va_list types)
{
	UNUSED(size);
	UNUSED(types);
	UNUSED(precision);
	UNUSED(buffer);
	UNUSED(width);
	UNUSED(buffer);

	return (write(1, "%%", 1));
}


/**
 * print_int - Outputs int
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Computes active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */

int print_int(int size, va_list, int precision,
char buffer[], int width, int flags)
{
	int x = BUFF_SIZE - 2;
	int is_negative = 0;
	unsigned int nm;
	long int z = var_arg(types, long int);

	z = convert_size_number(z, size);
	if (z == 0)
		buffer[x--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';
	nm = (unsigned long int)z;

	if (z < 0)
	{
		nm = (unsigned long int)((-1) * z);
		is_negative = 1;
	}
	while (nm > 0)
	{
		buffer[x--] = (num % 10) + '0';
		num /= 10;
	}
	x++;
	return (write_number(is_negative, x, buffer, flags, width, precision, size));
}



/**
 * print_binary - Outputs an unsigned number
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Computes  active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Num of char printed.
 */
int print_binary(int size, int precision, int width,
va_list types, int flags, char buffer)
{
	unsigned int j, k, x, sum;
	unsigned int b[32];
	int count;

	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	j = va_arg(types, unsigned int);
	k = 2147483648; /* (2 ^ 31) */
	b[0] = j / k;

	for (x = 1; x < 32; x++)
	{
		k /= 2;
		b[x] = (j / k) % 2;
	}
	for (x = 0, sum = 0, count = 0; x < 32; x++)
	{
		sum += a[x];
		if (sum || x == 31)
		{
			char y = '0' + a[i];

			write(1, &y, 1);
			count++;
		}
	}
	return (count);
}
