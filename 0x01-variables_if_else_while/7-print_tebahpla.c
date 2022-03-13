#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in a reverse form.
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
