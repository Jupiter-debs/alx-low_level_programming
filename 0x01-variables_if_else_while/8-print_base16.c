#include <stdio.h>
/**
 * main - entry point
 *
 * Return:  0 if success
 */

int main(void)
{
	char i = 48;

	for (i = 48; i <= 102; i++)
	{
		if (i >= 58 && i <= 96)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
