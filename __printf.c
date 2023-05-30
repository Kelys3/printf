#include "main.h"

/**
 */
int _printf(const char *format, ...)
{
        va_list l;
        int i = 0;
        int counter = 0;

        va_start(l, format);

        if (!format || (format[0] == '%' && !format[1]))
                return (-1);
        if (format[0] == '%' && format[1] == ' ' && !format[2])
                return (-1);

        while (format[i])
        {
                if (format[i] == '%')
                {
                        i++;
                        if (!format[i] || (format[i] == ' ' && !format[i + 1]))
                        {
                                counter = -1;
                                break;
                        }

                        else if (format[i])
				 {
                                counter += parser(l, format[i - 1], format[i]);
                        }
                }
                else
                {
                        write(1, &format[i], 1);
                        counter++;
                }
                i++;
        }

        va_end(l);
        return (counter);
}