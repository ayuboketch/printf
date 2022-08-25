#include"main.h"

/**
 * get_id_no - selects the correct function for a specifc specifier
 * @s: format
 * @index: index for argument identifier
 * Return: amount of identifiers
 */

int get_id_no(const char *s, int index)
{
	print_type printer[] = {
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
	return (j);
}
