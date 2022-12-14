#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given integer
 * @n: is an integer
 * Description: prints the last digit of an integer
 * Returns: integer
 */

int print_last_digit(int n)
{
	int lastd = n % 10;

	if (n < 0)
	{
		lastd = -lastd;
	}
	_putchar(lastd + '0');
	return (lastd);
}
