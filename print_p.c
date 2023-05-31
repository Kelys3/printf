#include "main.h"
#include <stdlib.h>

/***/
int hexal(unsigned long int r)
{
        char d;
        int cntr = 0, j = 0, k;
        unsigned long int q = r;
        int *up_hex = NULL;

        do {
                q /= 16;
                cntr++;
        }
       	while (q > 0);

        up_hex = malloc(sizeof(int) * cntr);
       
       	if (up_hex == NULL)
                return (-1);

        while (r > 0)
        {
                up_hex[j] = r % 16;
                r = r / 16;
	}

        for (k = j - 1; k >= 0; k--)
        {
                if (up_hex[k] > 9)
                        d = 'a' + (up_hex[j] % 10);
                else
                        d = up_hex[k] + '0';
                write(1, &d, 1);
        }

        free(up_hex);

        return (cntr);
}

/**
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
