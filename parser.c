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

	if (s == 'b')
                num += print_binary(l);
      
        else
        {
                write(1, &h, 1);
                write(1, &s, 1);
                num += 2;
        }
	return (num);
}
