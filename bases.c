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
	}
	return (counter);
}
