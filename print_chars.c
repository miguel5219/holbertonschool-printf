#include "main.h"
#include <stdlib.h>

/**
 * print_c - print char
 * @c: char 
 * Return: 1
 */
int print_c(va_list c)
{
	char letter = (char)va_arg(c, int);

	_putchar(letter);
	return (1);
}

/**
 * print_s - print string
 * @s: string
 * Return: number of chars printed
 */
int print_s(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
