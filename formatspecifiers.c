include "main.h"

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
        int ctr = 0, val;

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
                ctr++;
        }
        return (ctr);
}
