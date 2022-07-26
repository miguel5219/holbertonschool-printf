%_PRINTF(3) _printf 1.0.0
%Paola Suarez Miguel Moreno and Antonio Rdz
%22 July 2022

# NAME
_printf - Is a custom implementation of the C programming printf

## SYNOPSIS

#include <stdarg.h>

	typedef struct print
{
		  	char *t;
				int (*f)(va_list);
			} print_t;

			int _putchar(char c);
			int _printf(const char *format, ...);
			int print_c(va_list c);
			int print_s(va_list s);
			int print_i(va_list i);
			int print_b(va_list b);

## DESCRIPTION
The functions in the printf() produces output according to a format as described below.
On successful return, these functions return the number of characters printed, excluding the null byte used to end output to strings.

### **Format of the format string**
The format string is a character string. The  format string  is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications. 
Each conversion specification is introduced by the character %, and ends with a conversion specifier.
The  arguments must correspond properly (after type promotion) with the conversion specifier. 

### **The conversion specifier**

A character that specifies the type of conversion to be applied. The conversion specifiers and their meanings are:

**c**
: The int argument is converted to an unsigned char, then the resulting character is written

**s**
: The const char * argument is expected to be a pointer to an array of character type (pointer to a string). Characters from the array are written up to a terminating null byte, but do ot include the terminating null byte.

**d, i**
: The int argument is converted to signed decimal notation.

**b**
: The unsigned int argument is converted to binary notation(b).

**%**
: A '%' is written but no argument is converted. The complete version specification is '%%'


## RETURN VALUE

Upon successful return, these functions return the number of characters printed (excluding the null byte  used to end output to strings).

**If an output error is encountered, a NULL is returned.**


## EXAMPLES

To print Pi to five decimal places:

 #include "main.h"
 _printf("Character:[%c]\n", 'H');


## BUGS
_No known bugs._
	
