#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * fills the first n bytes of the memory area pointed
 * @s: pointer to the memory area.
 * @b: constant to fill memory with.
 * @n: bytes of the memory area to be filled.
 *
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;
	
	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}

