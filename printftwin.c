#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf -  produces output according to a format
 * @format: character string
 *
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list p;

	va_start(p, format);

	int y = 0;
	int j;
	char i;
	char *k;
	unsigned int b;

	if (format != NULL)
	{
		for (; format != '\0'; format++)
		{
			if (format == '%')
				format++;

			{
				else if (format == 'c')
				{
					i = (char)va_arg(p, int)
						_putchar(i);
						y++;
				}
				else if (format == "s")
				{
					k = va_arg(p, char *);

					while (k != '\0')
					{
						_putchar(k);
						k++;
						y++;
					}
				}
				else if (format == 'd' || format == 'i')
				{
					j = va_ard(p, int);

					if (j < 0)
					{
						_putchar('-');
						j = -j;
						y++;
					}
					y++;
					print_integer(j);
				}
				else if (format == 'b')
				{
					b = va_arg(p, unsigned int);
				_print_binary(b);
				y++;
				}
				else if (format == 'u' 
						|| format == 'o' 
						|| format == 'x'
						|| format == 'X')
				{
					digit = va_arg(p, unsigned int);

					if (format == 'u')
						base = 10;
					else if (format == 'o')
						base = 8;
					else if (format == 'x' || format == 'X')
						base = 16;

					_print_integer(digit, base);
					y++;
				}


			}

		}
	}
	va_end(p);
	return (y);
}
