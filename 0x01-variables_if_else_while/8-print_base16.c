#include <stdio.h>
/**
 * main - entry point
 *
 * Return:  0 if success
 */

int main(void)
{
	char i = 48;
	char c = 58;

	for (i = 48; i <= 122; i++)
	{
		for (c = 58; c <= 96; c++)
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
