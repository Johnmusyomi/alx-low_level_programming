#include "main.h"

/**
 * _abs(int) - Entry point
 * @n: integer
 * Description: Returns an absolute value of any integer
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
