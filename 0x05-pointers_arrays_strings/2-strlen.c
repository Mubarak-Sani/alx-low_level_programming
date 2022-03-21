#include "main.h"
/**
 *_strlen - prints the length of a string.
 *@s: string passed to the function.
 *
 *Return: void.
 */

int _strlen(char *s)
{
    int i;
    i = 0;

    while(*s != '\0')
    {
        i++;
        s++;
    }
    return (i);
}