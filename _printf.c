#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf -entry point,prints input
 * @format: -point to respective input
 * Return: (count)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int (*func)(va_list);
	int count = 0;
	int length;

	if (format != NULL)
	{
		va_start(args, format);
		length = strlen(format);
		if ((length != 1) || (format[0] != '%'))
		{

			while (format[i] != '\0')
			{
				if (format[i] == '%')
				{
					func = get_function(format[i + 1]);
					if (func)
					{
						count = count + func(args);
						i = i + 2;
						continue;
					}
					else if (format[i + 1] == '%')
						i++;

				}
				_putchar(format[i]);
				i++;
				count++;
			}
			va_end(args);
			return (count);
		}

	}
	return (-1);

}
