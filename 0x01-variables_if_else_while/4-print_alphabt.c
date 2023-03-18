#include <stdio.h>
/**
 * main - entry point
 *
 * Return:  0 if success
 */

int main(void)
{
	char c = 97;

	for (c = 97; c <= 122; c++)
		putchar(c);
		if (c == 101 || c == 113)
			continue;
	putchar('\n');
	return (0);
}
