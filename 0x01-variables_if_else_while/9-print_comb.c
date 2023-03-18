#include <stdio.h>
/**
 * main - entry point
 *
 * Return:  0 if success
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
		putchar(44);
		puchar(32);
		i++;
	}
	putchar(32);
	return (0);
}
