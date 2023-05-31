#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints a character to stdout
 * @l: List of arguments
 *
 * Return: number of characters
 */
int print_char(va_list l)
{
	int val;
	char c = va_arg(l, int);

	val = write(STDOUT_FILENO, &c, 1);
	return (val);
}

/**
 * print_string - prints a string to stdout
 * @l: List of arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list l)
{
	char *str = NULL;
	int counter = 0, val;

	str = va_arg(l, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		val = write(STDOUT_FILENO, str, 1);
		if (val == -1)
			return (-1);
		str++;
		counter++;
	}
	return (counter);
}

/**
 * print_integer - prints integer
 * @l: argument
 * Return: number of chars printed
 */
int print_integer(va_list l)
{
	int count = 0, m;
	int k = va_arg(l, int);
	unsigned int o = 1;
	unsigned int num;
	char v;

	if (k < 0)
	{
		v = '-';
		count += write(STDOUT_FILENO, &v, 1);
		num = (unsigned long)(-1 * k);
	}
	else
	{
		num = (unsigned long)k;
	}
	k = num;
	while (num >= 10)
	{
		num /= 10;
		o *= 10;
	}
	while (o >= 1)
	{
		m = (int)((k / o) % 10);
		v = m + '0';
		write(STDOUT_FILENO, &v, 1);
		o /= 10;
		count++;
	}
	return (count);
}

int print_unsigned(va_list l)
{
        int cntr = 0, o;
        unsigned int i = va_arg(l, unsigned int);
        unsigned int count = 1;
        unsigned int num;
        char d;

        num = i;

        while (num >= 10)
        {
                num /= 10;
                count *= 10;
        }

        while (count >= 1)
        {
                o = (unsigned int)((i / count) % 10);
                d = o + '0';
                write(STDOUT_FILENO, &d, 1);
                count /= 10;
                cntr++;
        }

        return (cntr);
}
