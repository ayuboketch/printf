#include"main.h"

/**
 * get_print_func - selects the correct function for a specifc specifier
 * @s: format
 * @index: index for argument identifier
 * Return: amount of identifiers
 */

int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_type printer[] = {
		{"c", print_char}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"x", print_hex}, {"X", print_upx},
		{"o", print_oct}, {"u", print_unt},
		{NULL, NULL}

	};

	int i = 0, j = 0, first_index;

	first_index = index;

	while (printer[i].arg_type) /* checks if the argument type exists*/
	{
		if (s[index] == printer[i].arg_type[j])
			/*checks for the identifier in printer*/
		{
			if (printer[i].arg_type[j] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (printer[i].f);
}
