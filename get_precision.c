#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *i, va_list list)
{
	int cur_p = *p + 1;
	int precision = -1;

	if (format[cur_p] != '.')
		return (precision);

	precision = 0;

	for (cur_p += 1; format[cur_p] != '\0'; cur_p++)
	{
		if (is_digit(format[cur_p]))
		{
			precision *= 10;
			precision += format[cur_p] - '0';
		}
		else if (format[cur_p] == '*')
		{
			cur_p++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*p  = cur_p - 1;

	return (precision);
}
