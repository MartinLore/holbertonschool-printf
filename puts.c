#include <stdio.h>
#include "main.h"
/**
 *	putts - print string
 *	
 *	@c: string
 *	Return: number of bytes
 */
int putts(char *c)
{
		int count = 0;
		if (c)
		{
			for (count = 0; c[count] != '\0'; count++)
			{
				_putchar(c[count]);
			}
		}
	return (count);
}
