#include <stdarg.h>
#include "main.h"
/**
 * print_HEX - prints integers in base 16
 * @l: arguments
 *
 * Return: number of chars printed
 */
int print_HEX(va_list l)
{
	unsigned int o = va_arg(l, unsigned int);
	char d;
	int cnter = 0, j = 0, k = 0, up_hex[32];

	if (o == 0)
	{
		d = o + '0';
		write(1, &d, 1);
		return (cnter);
	}
	else
	{
		while (o > 0)
		{
			up_hex[j] = o % 16;
			o = o / 16;
			cnter++;
			j++;
		}

		for (k = j - 1; k >= 0; k--)
		{
			if (up_hex[k] > 9)
			{
				d = 'A' + (up_hex[k] % 10);
			}
			else
			{
				d = up_hex[k] + '0';
			}
			write(1, &d, 1);
		}
		return (cnter);
	}
}
