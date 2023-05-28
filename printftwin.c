#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf -  produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 * excluding the null byte used to end
 * output to strings
 */

int _printf(const char *format, ...)
{
	va_list p;/* the arguments*/

	va_start(p, format);/* initialize the argumemts and format*/

	int y = 0;/* the counter*/
	char i;/*the new variable assigned to 'c' */
	char *k;/* the new pointer assigned to 's'*/

	if (format != NULL)
	{
		for (; format != '\0'; format++)
		{
			if (format == '%')
				format++;

			{
				if (format == 'c')
				{
					i = (char)va_arg(p, int)
						_putchar(i);
						y++;
				}
				if (format == "s")
				{
					k = va_arg(p, char *);
`
					while (k != '\0')
					{
						_putchar(k);
						k++;
						y++;
					}
				}
			}
		}
	}
	va_end(p);
	return (y);
}
