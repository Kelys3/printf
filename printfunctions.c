#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_integers - prints integers
 * @p: the arguments 
 * Return: the number of characters printed
 */
int print_integers(va_list p)
{
	int x;
	int count = 0;
	int k = 1;
	unsigned int m;
	int d;

	x = va_arg(p, int);

	if (x < 0)
	{
		x = -x;
		count++;
		m = x * -1; 

	}
	else
	{
		m = x;
	}

	d = m / k;

	while (d > 9)
		k = k * 10;
	d++;

	while (k != 0)
	{
		_putchar('0' + d);
		count++;
		m = m % k;
		k = k / 10;
	}
	return (count);
}


/**/
int _print_binary(va_list p)
{
	unsigned int c;
	char s[32];
	int l = 0;
	int i;

	c = va_arg(p, unsigned int);

	if (c == 0)
	{
		_putchar('0')
			return (1);
	}

	while (c > 0)
	{
		s[l] = c % 2;
		c = c / 2;
		l++;
	}

	i = l - 1;

	for (; i >= 0; i--)
	{
		_putchar('0' + s[i]);
	}
	return (l);
}
