#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int len_f = 0;
	int i;

	va_start(args, format);

	while (format[len_f] != '\0')
		len_f++;
	for (i = 0; i < len_f; i++)
	{
		va_arg(args, char*);
		printf("%s", va_arg(args, char*));
	}
	va_end(args);
	return(len_f);
}
