#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_integers - prints integers
 * @p: the arguments 
 * Return: the number of characters printed
 */

int print_integers(va_list *p)
{
	int x;
	int count = 0;
	int k = 1;
	int m;
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
int _print_binary(va_list *p)
{ 
	char s[32];
	unsigned int c;
	int l = 0;
	int i;

	c = va_arg(p, unsigned int);

	if (c == 0)
	{
		_putchar('0');
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


/**/
int _integerbase(va_list *p)
{
	char arr;
	unsigned int num;
	int digit, t, check, a;
	int b = 0;
	int i;
	int count, d;

	num = va_arg(p, unsigned int);

	if (num == 0)
	{
		_putchar ('0'); 
		return (1);
	}
	if (arr == 'u')
	{
		if (num == 0)
		{
			digit = 0;
			t = num;
			while (t != 0)
			{
				t = t/10;
				digit++;
			}
			while (digit > 0)
			{
				check = 1;
				for (a = 1; a < digit; a++)
				{
					check = check * 10;
					d = num / check;
					num = num % check;
					_putchar('0' + d);
					digit--;
					b++;
				}
			}
		}
			else if (arr == 'o')
			{
				digit = 0;
				t = num;
			}
				while (digit > 0)
				{
					check = 1;

					for (a = 1; a < digit; a++)
					{
						check = check * 8;
						d = num / check;
						num = num % check;
						_putchar('0' + d);
						digit--;
						count++;
					}
				}
				else if (arr == 'x' || arr == 'X')
				{
					const char *hexChars = (arr == 'X') ? "0123456789ABCDEF" : "0123456789abcdef";
					digit = 0;
					t = num;
				}

					while ( t != 0)
					{
						t /= 16;
						digit++;
					}
					while (digit > 0)
					{
						check = 1;
						for (a = 1; a < digit; i++)
							check *= 16;
						d = num / check;
						num = num % check;
						_putchar(hexChars[d]);
						digit--;
						count++;
					}
					return (count);
	}
}
