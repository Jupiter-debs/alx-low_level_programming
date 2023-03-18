#include <stdio.h>
/**
 * main - point of entry
 *
 * Return: returns 0 for success
 */

int main(void)
{
	char c = 97;
	char ch = 65;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (ch = 65; ch <= 90; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
