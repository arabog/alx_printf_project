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
/*	int len;
	int len2; */

	/* unsigned int ui;
	void *addr; */
	
	/* test for %c and %s */
	_printf("Let's try to printf a %%%%%% \%---  ## \"heyy\" \\ simple sentence.\n");
	printf("Let's try to printf      a  %%%%      rt#  $ & @ ? \"hello\" \\ simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	 printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	/* test for %d and %i
	_printf("Length:[%d, %i]\n", 012, 012);
	printf("Length:[%d, %i]\n", 0012, 0012);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534); */

	return (0);
}
