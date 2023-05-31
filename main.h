#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int print_char(va_list l);
int print_string(va_list l);
int parser(va_list l, char h, char s);
int print_integer(va_list l);
int print_binary(va_list l);
int print_octal(va_list l);
int print_hex(va_list l);
int print_HEX(va_list l);
int print_unsignedint(va_list l);
int print_reverse(va_list l);
int print_rot13(va_list l);
int print_S(va_list l);
int print_p(va_list l);

#endif
