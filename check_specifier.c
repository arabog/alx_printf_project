#include "main.h"

/**
 * check_specifier - checks for a format specifier and prints variadic
 * arguments.
 * @c: character pointer to format specifier
 *
 * Return: - number or characters printed
 */

int (*check_specifier(const char *c))(va_list)
{
	int i;

	print_f array[6] = {
		{"c", print_char}, 
		{"s", print_str}, 
		{"%", print_cent}, 
		{"d", print_dec}, 
		{"i", print_int}, 
		{NULL, NULL}
	};

	for (i = 0; array[i].ch != NULL; i++)
	{
		if (*(array[i].ch) == *c)
		{
			return (array[i].f);
		}
	}
	return (NULL);
}
