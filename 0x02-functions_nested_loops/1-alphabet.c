#include "main.h"

/**
 * main - check the code
 * Description - a function that prints alphabet
 * Return: Always 0.
 */
void print_alphabet(void) /* declarations of alphabet variable */
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
{
	_putchar(alphabet[i]);
}
	_putchar('\n');
}
