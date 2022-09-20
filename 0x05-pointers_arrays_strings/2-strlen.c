#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 *
 * Return: length of string int
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);

}
