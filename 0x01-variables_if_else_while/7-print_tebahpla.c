#include <stdio.h>

/**
 * main - prints lowercase alphas in reverse
 * Retrun: Always 0 (success)
 */

int main(void)
{
	char in;

	for (in = 'z'; in >= 'a'; in--)
	{
		putchar(in);
	}
	putchar('\n');
	return (0);
}
