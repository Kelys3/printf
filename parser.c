#include "main.h"
#include <unistd.h>

/**
 * parser - parses arguments
 * @l: arguments
 * @h: arguments
 * @s: arguments
 * Return: number of characters
 */
int parser(va_list l, char h, char s)
{
	int num = 0;

	if (s == 'c')
		num += print_char(l);
	else if (s == 's')
		num += print_string(l);
	else if (s == 'd' || s == 'i')
		num += print_integer(l);
	else if (s == '%')
	{
		write(1, "%", 1);
		num++;
	}
	else if (s == 'b')
		num += print_binary(l);
	else if (s == 'o')
		num += print_octal(l);
	else if (s == 'x')
		num += print_hex(l);
	else if (s == 'X')
		num += print_HEX(l);
	else if (s == 'u')
		num += print_unsigned(l);
	else if (s == 'r')
		num += print_reverse(l);
	else if (s == 'R')
		num += print_rot13(l);
	else if (s == 'S')
		num += print_string(l);
	else if (s == 'p')
		num += print_p(l);
	else
	{
		write(1, &h, 1);
		write(1, &s, 1);
		num += 2;
	}
	return (num);
}
