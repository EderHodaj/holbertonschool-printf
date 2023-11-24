#include "main.h"
/**
 * get_function - function that bridges _printf to custom function
 * @c: -holds value of input
 * Return: (combo[i].print)
 */

int (*get_function(char c))(va_list)
{
	int i = 0;
	print_data combo[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	while (combo[i].type)
	{
		if (combo[i].type[0] == c)
			return (combo[i].print);
		i++;
	}
	return (NULL);
}
