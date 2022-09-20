#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: array pointer int
 * @n: int type integer
 * Description: numbers should be separated by comma then space
 * numbers should be displayed in the same order as they are stored
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
