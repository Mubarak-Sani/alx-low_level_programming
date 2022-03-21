#include "main.h"
#include <stdio.h>

/**
 * _puts: prints a string, followed by a newline.
 * @str: pointer to the argument.
 * Return: Always (0)
 * 
 */

void _puts(char *str)
{
    int i = 0;

    while (*str != '\0')
    {
        _putchar(*str);
        i++;
        str++;    
    }
    putchar('\n');
}
