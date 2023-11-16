#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - formatted output conversion and print
 * @format: character string. Format string is composed of zero or more
 * directives
 *
 * Return: the number of characters printed excluding the null byte
 * used to end output to strings
 */
int _printf(const char *format, ...)
{
    va_list n;
    int i, count = 0, count_s = 0;

    if (format == NULL)
    {
        return -1;
    }

    va_start(n, format);

    /* Loop through each character in the format string */
    for (i = 0; format[i] != '\0'; i++)
    {
        /* If the character is not a '%', print it as is */
        if (format[i] != '%')
        {
            _putchar(format[i]);
            count++;
        }
        /* If the character is a '%', handle the format specifier */
        else if (format[i + 1] == 'c')
        {
            _putchar(va_arg(n, int));
            i++;
            count++;
        }
        else if (format[i + 1] == 's')
        {
            char *str = va_arg(n, char *);
            /* If the string is NULL, print "(null)" */
            if (str == NULL)
            {
                str = "(null)";
            }
            count_s = putts(str);
            i++;
            count += count_s;
        }
        else if (format[i + 1] == 'd' || format[i + 1] == 'i')
        {
            int value = va_arg(n, int);
            count += print_int(value);
            i++;
        }
        else if (format[i + 1] == '%')
        {
            _putchar('%');
            i++;
            count++;
        }
        else /* If the format specifier is not recognized, print it as is */
        {
            _putchar('%');
            _putchar(format[i + 1]);
            i++;
            count += 2;
        }
    }

    va_end(n);

    return count;
}