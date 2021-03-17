#include "holberton.h"

/**
 * print_number - converts a string to an integer and prints
 * its content.
 * @i: variadic argument brought from printf function
 * Return: amount of characters printed
 */
int print_number(va_list i)
{
	int n, var = 1, length = 0;
	unsigned int dino;

	n = va_arg(i, int);

	if (n < 0)
	{
		_putchar('-');
		dino = n * -1;
		length++;
	}
	else
	{
		dino = n;
	}

	while (dino / var > 9)
	{
		var = var * 10;
	}
	while (var != 0)
	{
		length = length + _putchar(dino / var + '0');
		dino = dino % var;
		var = var / 10;
	}
	return (length);
}
