#include "main.h"
/**
 *_strlen - prints the length of a string.
 *@s: string passed to the function.
 *
 *Return: void.
 */

void _strlen(char *s)
{
    int i;

    while(*s != "\0")
    {
        i++;
        s++;
    }
    return (i);
}