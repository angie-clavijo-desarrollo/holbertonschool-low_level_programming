#include "holberton.h"
/**
 *print_most_number - print number 0 to 9 except 2 and 4
 *
 *Return: none
 */
void print_most_numbers(void)
{
	char c;
	c = '0';
	
	while (c <= '9')
	{
	     if(c != '2' || c != '4'){
		_putchar(c);     
	     }

	     c++;
	}
	_putchar('\n');

	
}
