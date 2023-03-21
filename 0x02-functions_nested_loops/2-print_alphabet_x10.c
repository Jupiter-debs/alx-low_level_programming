#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10(): prints lowercase aplphabets 10 times.
 */
void print_alphabet_x10(void)
{
	int count = 9;
	char c = 97;

	while (count <= 0)
	{
		for (c = 97; c <=122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		count--;
	}
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
