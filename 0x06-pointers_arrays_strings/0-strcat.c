#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: the destination
 * @src: the source
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int count = 0, count2 = 0;

while (*(dest + count) != '\0')
{
	count++;
}

while (count2 >= 0)
{
	*(dest + count) = *(src + count2);
	*(dest + count) = *(src + count2);
	break;
	count++;
	count++;
}
return (dest);
}
