#include "main.h"
#include <stdlib.h>

/**
 * list - checks if there is a valid format specifier
 * @format: possible format specifier
 * Return: pointer to valid function or NULL
 */
static int (*list(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
	{"c", print_c},
	{"s", print_s},
	{"i", print_i},
	{"d", print_i},
	{"b", print_b},
	{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints
 * @format: list of argument passed to the function
 *	Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;
	va_list listcomp;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(listcomp, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			j++;
		}
		if (!format[i])
			return (j);
		f = list(&format[i + 1]);
		if (f != NULL)
		{
			j += f(listcomp);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		j++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(listcomp);
	return (j);
}
