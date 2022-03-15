#include "main.h"
/**
 * _islower - checks for lower cases letters
 * @brief: input.
 *
 * Return 1 if c is lowercase.
 * 0 if anything else
 */

int _islower(c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}