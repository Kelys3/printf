#include "main.h"
#include <stdio.h>

/**
 */
int print_reverse(va_list l)
{
        char *str = va_arg(l, char *);
        int len = 0, k, val;

        if (!str)
                str = "(null)";

        while (str[len] != '\0')
                len++;

        for (k = len - 1; k >= 0; k--)
        {
                val = write(1, &str[k], 1);
                if (val == -1)
                        return (-1);
        }

        return (len);
}

/**
 */
int print_rot13(va_list l)
{
        int j, k, cnter = 0;
        char *str, alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

        str = va_arg(l, char *);
        if (str == NULL)
        {
                str = "(null)";
        }

        for (j = 0; str[k]; j++)
        {
                for (k = 0; alph[k]; k++)
                {
                        if (str[j] == alph[k])
                        {
                                cnter += write(1, &rot13[k], 1);
                                break;
                        }
                }
                if (!alph[k])
                {
                        cnter += write(1, &str[j], 1);
                }
        }
        return (cnter);
}
