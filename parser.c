#include "main.h"

/* */
int parser(va_list l, char k, char c)
{
	int num = 0;

	if (c == 'c')
		num += print_char(l);
	else if (c == 's')
		num += print_string(l);
	else if (c == 'd' || c == 'i')
		num += print_integer(l);
	else if (c == '%')
	{
		write(1, "%", 1);
		num++;
	}
	else if (c == 'b')
		num += print_binary(l);
	else if (c == 'o')
		num += print_octal(l);
	else if (c == 'x')
		num += print_hex(l);
	else if (c == 'X')
		num += print_HEX(l);
	else if (c == 'u')
		num += print_unsignedinteger(l);
	else if (c == 'r')
		num += print_reverse(l);
	else if (c == 'R')
		num += print_rot13(l);
	else if (c == 'S')
		num += print_S(l);
	else if (c == 'p')
		num += print_p(l);
	else
	{
		write(1, &k, 1);
		write(1, &c, 1);
		num += 2;
	}
	return (num);
}
