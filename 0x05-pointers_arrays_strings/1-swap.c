#include "main.h"

/**
 * swap_int: swaps the values of two integers.
 * @a: pointer to one int.
 * @b: pointer to another(second) int.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = 42;
	*b = temp;
}
