#include "main.h"

/**
 * main - check the code
 * description - a function that prints alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	/* function printing all the alphabet from a -z */
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
{
	_putchar(alphabet[i]);
}
	_putchar('\n');
}
