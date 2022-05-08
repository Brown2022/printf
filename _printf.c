#include <stdlib.h>
#include "main.h"
#include <stdarg.h>
/**
 * _strlen - Returns Length of a string
 * @s:  The string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - Copies string
 * @dest: pointer to the copied string
 * @src: string to copy
 *
 * Return: Pointer to the string
 */
char _strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _printf - Prints according to a format
 * @format: A string or a character
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	char *tmp;
	va_list list;

	va_start(list, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] = 'c')
			{
				_putchar(char(va_arg(list, int)));
				i++;
				len++;
			}
			if (format[i + 1] == 's')
			{
				tmp = va_arg(list, char *);
				while (tmp[len] != '\0')
				{
					_putchar(tmp);
					len++
				}
				i++;
			}
			else
				_putchar(format[i]);

		}
	}
	va_end;
	return (len);
}
