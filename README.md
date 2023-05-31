Our first team project. We are creating our own printf function... How cool :)

Our printftwin imitates the printf function by performing formatted output conversions and printing out data to standard output stream with the prototype;

**int _printf(const char *format, ...)**

The format string is composed of zero or more directives: ordinary characters  (not  %), which are copied unchanged to the output stream; and conversion specifications,  each  of which results in fetching zero or more subsequent argu‐ments. Each conversion specification is introduced  by the  character %, and ends with a conversion specifier.In between there may be (in this order)  zero  or  more flags,  an  optional  minimum  field width, an optional precision and an optional length modifier.

Conversion specifiers used include:

%d or %i: Print the argument as a signed decimal integer.
%u: Print the argument as an unsigned decimal integer.
%o: Print the argument as an unsigned octal integer.
%x or %X: Print the argument as an unsigned hexadecimal integer (lowercase or uppercase, respectively).
%f: Print the argument as a floating-point number in decimal notation.
%c: Print the argument as a character.
%s: Print the argument as a null-terminated string.
%h: Specifies that the corresponding argument is of type short int or unsigned short int for integer specifiers %d, %i, %o, %u, %x, %X.
%l: specifies that the corresponding argument is of type long int or unsigned long int for integer specifiers %d, %i, %o, %u, %x, X.

We also handled flags, field width, precision and length modifiers.

