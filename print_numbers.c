#include "main.h"

/**
  * print_i - prints an integer
  * @i: integer
  * Return: number of chars and digits printed
  */
int print_i(va_list i)
{
	int array[10];
	int j, k, l, sum, iterator;

	l = va_arg(i, int);
	iterator = 0;
	k = 1000000000;
	array[0] = l / k;
	for (j = 1; j < 10; j++)
	{
		k /= 10;
		array[j] = (l / k) % 10;
	}
	if (l < 0)
	{
		_putchar('-');
		iterator++;
		for (j = 0; j < 10; j++)
			array[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += array[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + array[j]);
			iterator++;
		}
	}
	return (iterator);
}


