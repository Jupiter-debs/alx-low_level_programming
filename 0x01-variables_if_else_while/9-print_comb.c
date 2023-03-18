#include <stdio.h>
/**
 * main - entry point
 *
 * Return:  0 if success
 */

int main(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
