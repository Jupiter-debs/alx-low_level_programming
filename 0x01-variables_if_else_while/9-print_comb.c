#include <stdio.h>
/**
 * main - entry point
 *
 * Return:  0 if success
 */

int main(void)
{
	int i = 48;

	while ( i <= 57)
	{
		putchar(i);
		putchar(44);
		putchar(32);
		i++;
	}
	putchar('\n');
	return (0);
}
