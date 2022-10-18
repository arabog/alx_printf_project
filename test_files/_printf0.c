#include "main.h"

/**
 * _printf - prints a formatted string
 * @format: pointer to character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, len = 0, flag, j, k;
	va_list list;
	char *str;
	char ch;

	char *specifier = "cs";

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			flag = 1;

			if (format[i] == '\\')
			{
				i++;

				switch (format[i])
				{
					case '\\':
						write(1, &format[i], 1);
						flag = 0;
						break;
					case 34:
						write(1, &format[i], 1);
						flag = 0;
						break;
					case '%':
						return (1);
				}
			}

			for (k = 0; k < 2; k++)
			{
				if (format[i] == '%' && format[i + 1] == specifier[k])
				{
					i++;

					switch (format[i])
					{
						case 'c':
							ch = va_arg(list, int);
							write(1, &ch, 1);
							len += 1;
							flag = 0;
							break;
						case 's':
							str = va_arg(list, char *);
							for (j = 0; str[j] != '\0'; j++)
							{
								write(1, &str[j], 1);
								len += 1;
							}
							flag = 0;
							break;
					}
					break;
				}
			}

			if (format[i] == '%' && format[i + 1] == '%')
				i++;

			if (flag)
			{
				write(1, &format[i], 1);
				len += 1;
			}
			i++;
		}
	}
	va_end(list);
	return (len);
}

