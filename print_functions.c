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
 * print_string - prints string
 * @string_list: -points to respective variable
 * Return: (length)
 */

int print_string(va_list string_list)
{
	char *str = va_arg(string_list, char *);
	int length = 0;

	if (str == NULL)
		str = "(null)";

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	return (length);
}

/**
 * print_int - prints integer
 * @int_list: - points to the respective variadic arguments
 * Return: (0)
 */
int print_int(va_list int_list)
{
	(void) int_list;
	return (0);
}
