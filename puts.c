#include "main.h"

/**
 * putts - print string
 * @c: string
 *
 * Return: number of bytes
 */
int putts(char *c)
{
    int count = 0;

    /* If the string is not NULL, print it character by character */
    if (c)
    {
        for (count = 0; c[count] != '\0'; count++)
        {
            _putchar(c[count]);
        }
    }

    /* Return the count of printed characters */
    return (count);
}