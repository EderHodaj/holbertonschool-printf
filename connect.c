#include "main.h"
int (*get_function(char c))(va_list)
{
	int i = 0;
	print_data combo[] =
	{
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	while (combo[i].type)
	{
		if (combo[i].type == c)
			return (combo[i].print);
		i++;
	}
	return (NULL);
}
