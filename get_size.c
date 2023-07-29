#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int cur_p = *p + 1;
	int size = 0;

	if (format[cur_p] == 'l')
		size = S_LONG;
	else if (format[cur_p] == 'h')
		size = S_SHORT;

	if (size == 0)
		*p = cur_p - 1;
	else
		*p = cur_p;

	return (size);
}
