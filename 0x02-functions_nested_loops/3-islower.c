#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int j = 'a';

	for (j = 'a'; j <= 'z'; j++)
	{
	/* refer int c*/
	if (c == j)
	{
	Return(1);
	}
	}

return (0);
}
