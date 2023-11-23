#include"main.h"
#include<stdarg.h>

/**
 * print_char -entry point,prints char
 * @char_list: -points to respective variable
 * Return: (1)
 */

int print_char(va_list char_list)
{
	char letter = va_arg(char_list, int);

	_putchar(letter);

	return (1);
}

/**
 * print_string -entry point,prints string
 * @string_list: -points to respective variable
 * Return: (i)
 */

int print_string(va_list string_list)
{
	char *str = va_arg(string_list, char *);
	int i = 0;

	int length = 0;

	if (str == NULL)
		str = "(null)";
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		length++;
		i++;
	}
/**
	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			length++;
			i++;
		}
	}
	else
	{
		while (zero[i] != '\0')
		{
			_putchar(zero[i]);
			length++;
			i++;
		}
	}*/
	return (length);
}

int print_int(va_list int_list)
{
	return (0);
}
