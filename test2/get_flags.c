#include "main.h"

/**
 * get_flags - computes the flgs
 * @format: Format str in which to print the arguments
 * @i: input
 * Return: Flags.
 */
int get_flags(const char *format, int *i)
{
	int x, cr_y;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (cr_y = *x + 1; format[cr_y] != '\0'; cr_y++)
	{
		for (x = 0; FLAGS_CH[x] != '\0'; x++)
			if (format[cr_y] == FLAGS_CH[y])
			{
				flags |= FLAGS_ARR[y];
				break;
			}
		if (FLAGS_CH[y] == 0)
			break;
	}
	*x = cr_y - 1;
	return (flags);
}
