#include "main.h"
#include <unistd.h>

/**
 * print_binary - prints integers in base 2
 * @l: arguments
 *
 * Return: number of characters printed
 */
int print_binary(va_list l)
{
	unsigned int o = va_arg(l, unsigned int);
	char d;
	int counter = 0, m = 0, n = 0, binary[32];

	if (o == 0)
	{
		d = o + '0';
		write(1, &d, 1);
		return (1);
	}
	else
	{
		while (o > 0)
		{
			binary[m] = o % 2;
			o = o / 2;
			counter++;
			m++;
		}
		for (n = m - 1; n >= 0; n--)
		{
			d = binary[n] + '0';
			write(1, &d, 1);
		}
		return (counter);
	}
}

/**
 * print_octal - prints integers in base 8
 * @l: arguments
 *
 * Return: number of chars printed
 */
int print_octal(va_list l)
{
	unsigned int o = va_arg(l, unsigned int);
	char d;
	int cnter = 0, j = 0, k = 0, octa[32];

	if (o == 0)
	{
		d = o + '0';
		write(1, &d, 1);
		return (1);
	}
	else
	{
		while (o > 0)
		{
			octa[j] = o % 8;
			o = o / 8;
			cnter++;
			j++;
		}
		for (k = j - 1; k >= 0; k--)
		{
			d = octa[k] + '0';
			write(1, &d, 1);
		}
		return (cnter);
	}
}

/**
 * print_hex - prints integers in base 16(hexadecimal)
 * @l: arguments
 *
 * Return: number of printed chars
 */
int print_hex(va_list l)
{
	unsigned int q;
	char hex_num[] = "0123456789abcdef";
	char hex[32];
	int count = 0, i = 0, n;

	q = va_arg(l, unsigned int);

	if (q == 0)
	{
		hex[i++] = '0';
		count++;
	}
	else
	{
		while (q > 0)
		{
			hex[i++] = hex_num[q % 16];
			q = q / 16;
		}
	}
	for (n = i - 1; n >= 0; n--)
	{
		write(1, &hex[n], 1);
		count++;
	}
	return (count);
}
