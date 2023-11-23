#include "main.h"
/**
 * get_function - sdfsdf
 * @c:sdgsg
 * @va_listvsds
 * Return:sdfsdf
 */
int (*get_function(char c))(va_list)
{
	int i = 0;
<<<<<<< HEAD
	print_data combo[] =
	{
		{'c', print_char},
		{'s', print_string},
=======
	print_data combo[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
>>>>>>> 878be8aba6af0cbfb08c5ff3e4165c1d55b03113
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
