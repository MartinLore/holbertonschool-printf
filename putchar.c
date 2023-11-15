#include <unistd.h>
/**
 * _putchar - print a character
 *@c : char input
 *
 * return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
