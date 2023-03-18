#include <stdio.h>
/**
 * main - entry point
 *
 * Return:  0 if success
 */

int main(void)
{
	int i = 48;
	int j = 48;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(44);
			putchar(32);
			putchar(j);
		}
	}
	return (0);
}
