#include "main.h"
/**
 *_strlen - prints the length of a string.
 *@s: string passed to the function.
 *
 *Return: void.
 */

void _strlen(char *s)
{
    int len = strlen(*s);
    printf("%d\n", len);
}