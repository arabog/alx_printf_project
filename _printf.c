#include "main.h"

/**
 * _printf - prints a formatted string
 * @format: pointer to character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, value, count = 0;

	va_list list;

	int (*f)(va_list);

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(list);
				count += value;
				i += 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}

			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count = count + value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}

