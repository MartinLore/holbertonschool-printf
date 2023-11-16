#include <unistd.h>

/**
 * _putchar - print a character
 * @c: char input
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}