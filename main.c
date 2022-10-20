#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	/* unsigned int ui;
	void *addr; */
	
	/* test for %c and %s */
	len = _printf("Let's try [%i, %d] to printf a simple sentence.\n", 2022, -2050123);
	len2 = printf("Let's try [%i, %d] to printf a simple sentence.\n", 2022, -2050123);

	/* test for %d and %i */
	_printf("Length:[%d, %i]\n", len, len2);
	printf("Length:[%d, %i]\n", len, len2);
	_printf("Negative:[%d]\n", -123456789111);
	printf("Negative:[%d]\n", -123456789111);

	_printf("%d, %i\n", len, len2);
	printf("%d, %i\n", len, len2);

	return (0);
}
