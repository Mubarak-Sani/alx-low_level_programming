#include "main.h"

/**
 * main - nested_loops
 * description - print alphabet
 *
 * Return: no return value
 */

void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwyz";
	int i j;
	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 26)
		{
			_putchar(alphabet[j]);
			j++;
		}

		_putchar("\n");
		i++;
	}
}