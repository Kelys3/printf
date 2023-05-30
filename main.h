#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list l);
int print_string(va_list l);

#endif
