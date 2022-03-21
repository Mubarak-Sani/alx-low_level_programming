#include "main.h"
/**
 * void print_array - prints n elements of an array of integers, followed by a new line.
 *
 * @a: pointer to a.
 * @n: int n
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

