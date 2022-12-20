#include<stdio.h>

/**
 * main - print combos of single-digit nums
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int comb;

	for (comb = '0'; comb <= '9'; ++comb)
	{
		putchar(comb);
		if (comb != '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
