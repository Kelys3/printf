#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int print_char(va_list l);
int print_string(va_list l);
int parser(va_list l, char k, char s);

#endif
