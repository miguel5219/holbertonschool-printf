_printf
_printf is a custom implementation of the C programming function printf.

Prototype: int _printf(const char *, ...);

Examples
String

Input: _printf("%s\n", 'Hello World');
Output: Hello World.
Character

Input: _printf("The first letter of Hello World is %c\n", 'H');
Output: The first letter of Hello World is H
Integer

Input: _printf("I'm %i years old\n", 25);
Output: I'm 25 years old
Decimal:

Input: _printf("%d\n", 2000);
Output: 2000

Project Requirements
All files will be compiled on Ubuntu 20.04 LTS
Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
Code must follow the Betty style
Global variables are not allowed
Authorized functions and macros:
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Mandatory Tasks
 Write function that produces output with conversion specifiers c, s, and %.
 Handle conversion specifiers d, i.
 Create a man page for your function.
Advanced Tasks
 Handle conversion specifier b.

File Descriptions
_printf.c: - contains the function _printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.
_putchar.c: - contains the function _putchar, which writes a character to stdout.
main.h: - contains all function prototypes used for _printf.
man_3_printf: - manual page for the custom _printf function.
print_chars.c: - contains the functions print_c and print_s which handle the conversion specifiers c and s, respectively.
print_numbers.c: - contains the functions print_i and print_d, which handle the conversion specifiers i and d, respectively
print_b.c: - contains the functions print_b, which handle the conversion specifiers b

Authors
Luis Antonio Rodríguez | @Kumoth

Paola Suárez | @paosua86

Miguel Moreno | @miguel5219
