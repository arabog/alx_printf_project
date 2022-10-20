#include "main.h"

/**
 * print_str - prints a string
 * @list: variadic parameter
 *
 * Return: number of characters printed
 */

int print_str(va_list list)
{
	int i, count, value;
	char *string;

	count = 0;

	string = va_arg(list, char *);

	if (string)
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			value = write(1, &string[i], 1);
			count += value;
		}
	}
	return (count);
}

