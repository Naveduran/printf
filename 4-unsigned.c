#include "holberton.h"
/**
 * print_unsigned - converts a string to an unsigned integer
 * and prints its content.
 * @u: variadic argument brought from printf function
 * Return: amount of characters printed
 */
int print_unsigned(va_list u)
{
	unsigned int n, var = 1, length = 0;

	n = va_arg(u, unsigned int);

	while (n / var > 9)
	{
		var = var * 10;
	}
	while (var != 0)
	{
		length = length + _putchar(n / var + '0');
		n = n % var;
		var = var / 10;
	}
	return (length);
}
