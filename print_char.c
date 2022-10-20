#include "main.h"

/**
 * print_char - prints a character
 * @list: variadic parameter
 *
 * Return: number of characters printed
 */

int print_char(va_list list)
{
	char ch;

	int count = 0;

	ch = va_arg(list, int);

	if (ch)
		count = write(1, &ch, 1);

	return (count);
}

