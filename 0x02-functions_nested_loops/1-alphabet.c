#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet(void)
{
	char c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n')
}
/**
 * main - entry point
 *
 * Return:  0 if success
 */
int main(void)
{
	print_alphabet();
	return (0);
}
