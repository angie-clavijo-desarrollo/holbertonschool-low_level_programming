#include "holberton.h"
/**
 *print_numbers - print numbers of 0 to 9
 *void: not arg
 */
void print_numbers(void)
{
	int  c;

	c = 48;
	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar ('\n');
}
