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
	/* len = _printf("Let's try to printf a simple sentence std.\n");
	len2 = printf("Std Let's try to printf a simple sentence.\n"); */
	/*_printf("Character:[%c]\n", 'H');
	 printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !"); */

	/* test for %d and %i
	_printf("Length:[%d, %i]\n", len, len);
	printf("Std Length:[%d, %i]\n", len2, len2); */
	_printf("Negative:[%d]\n", -762534);
	printf("Std Negative:[%d]\n", -762534);
	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Std Negative:[%d]\n", -762534);

	_printf("%d, %i\n", len, len2);
	printf("Std %d, %i\n", len, len2);

	return (0);
}
