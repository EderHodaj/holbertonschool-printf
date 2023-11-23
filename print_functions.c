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
 * print_int_rec - prints an int from va_list
 * @number: -holds value of number to be printed
 * @count: -holds value of the nr of digits
 * Return: (count + 1)
 */
int print_int_rec(long int number, int count)
{
	if (number < 0)
	{
		_putchar('-');
		count++;
		number = number * -1;
	}
	if (number / 10 == 0)
	{
		_putchar('0' + (number % 10));
	}
	else
	{
		count = print_int_rec(number / 10, count);
		_putchar('0' + (number % 10));
	}
	return (count + 1);
}
/**
 * print_int - entry point,prints corresponding int
 * @int_list: -points to the list of variadic args
 * Return: (print_int_recursion(number, 0))
 */
int print_int(va_list int_list)
{
	long int number = (long int) va_arg(int_list, int);

	return (print_int_rec(number, 0));
}
