#include <unistd.h>
#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H
#define BUFF_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_integers(va_list *p);
int _print_binary(va_list *p);
int _integerbase(va_list *p, char arr);

#endif
