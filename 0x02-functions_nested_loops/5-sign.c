#include "main.h"

/**
 * print_sign - Entry point
 * @n: the carrier variable
 * Description - checks whether n is positive or negative
 * and prints sign
 * Return: 1 if n > 0, 0 if n == 0 and -1 if n < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
		_putchar('0');
		return (0);
}
