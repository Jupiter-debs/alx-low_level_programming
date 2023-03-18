#include <stdio.h>
/**
 * main - entry point
 *
 * Return:  0 if success
 */

int main(void)
{
	char c = 122;

        for (c = 122; c >= 97; c--)
                putchar(c);
        putchar('\n');
        return (0);
