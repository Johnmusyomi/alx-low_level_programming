#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 and skips 2 and 4
 * Description: prints 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	int x = 0;

	while (x <= 9)
{
	if (x != 2 && x != 4)
{
	_putchar(x + '0');
}
x++;
}
_putchar('\n');
}
