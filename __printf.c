#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list l;
	int k = 0;
	int num = 0;

	va_start(l, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[k])
	{
		if (format[i] == '%')
		{
			k++;
			if (!format[i] || (format[k] == ' ' && !format[k + 1]))
			{
				num = -1;
				break;
			}
			else if (format[k])
			{
				num += parser(l, format[k - 1], format[k]);
			}
		}
		else
		{
			write(1, &format[k], 1);
			num++;
		}
		k++;
	}
	va_end(l);
	return (num);
}
