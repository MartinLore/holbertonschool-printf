#include "main.h"
#include <limits.h>
/**
 * print_int - Prints an integer
 * @value: The integer to print
 */
int print_int(int value)
{
    char buffer[50];
    int i = 0;
    int j;
    int is_negative = 0;

    /* Handle negative numbers */
    if (value < 0)
    {
        _putchar('-');
        is_negative = 1;
        if (value == INT_MIN)
        {
            value /= 10;
            value = -value;
            buffer[i++] = '8'; /* The last digit of INT_MIN is 8 */
        }
        else
        {
            value = -value;
        }
    }

    /* Handle zero explicitly to simplify the rest of the code */
    if (value == 0 && i == 0)
    {
        _putchar('0');
        return 1 + is_negative;
    }

    while (value != 0)
    {
        buffer[i++] = '0' + value % 10;
        value /= 10;
    }

    for (j = i - 1; j >= 0; j--)
    {
        _putchar(buffer[j]);
    }

    return i + is_negative; /* Return the number of digits plus 1 if the number was negative */
}