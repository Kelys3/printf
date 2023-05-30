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
	else if (s == 'd' || c == 'i')
		num += print_integer(l);
	else if (s == '%')
	{
		write(1, "%", 1);
		num++;
	}
	return (num);
}
