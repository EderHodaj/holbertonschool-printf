#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>


int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int (*func)(va_list);
	int count = 0;
	int length;

	if (format != NULL)
	{
		length = strlen(format);
		if ((length != 1) || (format[0] != '%'))
		{
			va_start(args, format);
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
		}
	}
	return (count);
}
