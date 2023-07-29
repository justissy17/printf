#include "main.h"

/**
 * get_width - Calculates the width for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int cur_p;
	int width = 0;

	for (cur_p = *p + 1; format[cur_p] != '\0'; cur_p++)
	{
		if (is_digit(format[cur_p]))
		{
			width *= 10;
			width += format[cur_p] - '0';
		}
		else if (format[cur_p] == '*')
		{
			cur_p++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*p = cur_p - 1;

	return (width);
}
