#include "main.h"


/**
 * _putchar - prints a character
 * @c: character
 *
 * Return: integer in character form
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - prints an integer
 * @n: integer to print
 */

int print_number(int n)
{
	unsigned int n1 = n;

	int len = 0;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n1;
	}
	if ((n1 / 10) > 0)
	{	len += 1;
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
	return (len);
}

/**
 * _printf - prints a formatted string
 * @format: pointer to character string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, len, flag, lenght, dec, j, k;
	va_list list;
	char *str;
	char ch;
	char *specifier;

	specifier = "csid";
	i = 0;
	len = 0;

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

			for (k = 0; k < 4; k++)
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
						case 'd':
							dec = va_arg(list, int);
							lenght = print_number(dec);
							len += lenght;
							flag = 0;
							break;
						case 'i':
							dec = va_arg(list, int);
							lenght = print_number(dec);
							len += lenght;
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

