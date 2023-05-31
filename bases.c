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

/**
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



/** **/
int print_hex(va_list l)
{
        unsigned int o = va_arg(l, unsigned int);
        char d;
        int cnter = 0, j = 0, k = 0, low_hex[32];

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
                        up_hex[j] = o % 16;
                        o = o / 16;
                        cnter++;
                        j++;
		}

		 for (k = j - 1; k >= 0; k--)
                {
                        if (low_hex[k] > 9)
                                d = 'a' + (low_hex[k] % 10);
                        else
                                d = low_hex[k] + '0';
                        write(1, &d, 1);
                }
                return (cnter);
        }
}


/**
 **/
int print_HEX(va_list l)
{
        unsigned int o = va_arg(l, unsigned int);
        char d;
        int cnter = 0, j = 0, k = 0, up_hex[32];

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
                        up_hex[j] = o % 16;
                        o = o / 16;
                        cnter++;
                        j++;
                }

                for (k = j - 1; k >= 0; k--)
                {
                        if (up_hex[k] > 9)
                                d = 'A' + (up_hex[k] % 10);
			else
                                d = up_hex[k] + '0';
                        write(1, &d, 1);
                }
                return (cnter);
        }
}
