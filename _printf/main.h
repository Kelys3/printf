#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list l);
int print_string(va_list l);


#endif
