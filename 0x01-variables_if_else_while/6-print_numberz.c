#include <stdio.h>
#include <time.h>
/**
 * main - print single digit nums of b10 without char
 *
 * Return: Always 0 (sucssess)
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
