#include "main.h"
#include <stdlib.h>

/**
 * hexal - prints integers in base 16
 * @r: arguments
 *
 *
 * Return: number of chars printed
 */
int hexal(unsigned long int r)
{
	char d;
	int cntr = 0, j;
	unsigned long int q = r;
	int *up_hex = NULL;

	for (q = r, cntr = 1; q > 15; cntr++)
		q = q / 16;

	up_hex = malloc(sizeof(int) * cntr);
	if (up_hex == NULL)
		return (-1);

	for (j = 0; j < cntr; j++)
	{
		up_hex[j] = r % 16;
		r = r / 16;
	}
	for (j = cntr - 1; j >= 0; j--)
	{
		if (up_hex[j] > 9)
			d = 'a' + (up_hex[j] % 10);
		else
			d = up_hex[j] + '0';
		write(1, &d, 1);
	}
	free(up_hex);
	return (cntr);
}

/**
 * print_p - prints a pointer
 * @l: arguments
 *
 * Return: number of characters printed
 */
int print_p(va_list l)
{
	int cntr = 0;
	void *ptr;

	ptr = va_arg(l, void*);

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	cntr += 2;

	cntr += hexal((unsigned long int)ptr);
	return (cntr);
}
