#include "main.h"

/**
 * print_cent - prints a % character
 * @list: variadic parameter
 *
 * Return: number of characters printed
 */

int print_cent(va_list list)
{
	(void)list;

	write(1, "%", 1);

	return (1);
}

