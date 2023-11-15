#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/* _printf -
 *@format :
 *
 *return :
 */
int _printf(const char *format, ...)
{
        unsigned int i, count_s, count = 0;
        va_list n;

        va_start(n, format);
	if (!format || (format[0] == '%' && format == NULL))
	{
		return (-1);
	}
        	for (i = 0; format[i] != '\0'; i++)
        	{
                	if (format[i] != '%')
			{
                        	_putchar(format[i]);
                	}
			else if (format[i + 1] == 'c')
			{
				_putchar(va_arg(n, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				count_s = putts(va_arg(n, char *));
				i++;
				count += (count_s - 1);
			}
			else if (format [i + 1] == '%')
			{
				_putchar('%');
				i++;
			}
			count += 1;	
		}
        va_end(n);
        return (count);
}
