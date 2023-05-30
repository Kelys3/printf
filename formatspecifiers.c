include "main.h"

/**
 * print_char - Prints a character
 * @l: List of arguments
 *
 * Return: 1
 */
int print_char(va_list l)
{
        int retVal;
        char c = va_arg(l, int);

        retVal = write(STDOUT_FILENO, &c, 1);
        return (retVal);
}

/**
 * print_s - Prints a string
 * @l: List of arguments
 *
 * Return: Number of characters printed
 */
int print_string(va_list l)
{
        char *str = NULL;
        int ctr = 0, retVal;

        str = va_arg(l, char*);

	 if (str == NULL)
        {
                str = "(null)";
        }

        while (*str != '\0')
        {
                retVal = write(STDOUT_FILENO, str, 1);
                if (retVal == -1)
                        return (-1);
                str++;
                ctr++;
        }
        return (ctr);
}

