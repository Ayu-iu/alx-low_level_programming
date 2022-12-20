#include<stdio.h>

/**
 * main - print combos of two twodigit nums
 * Return: Always 0
 */

int main(void)
{
	int comb1;

	for (comb1 = 0; comb1 < 100; comb1++)
	{
		int comb2;

		for (comb2 = comb1 + 1; comb2 < 100; comb2++)
		{
			putchar((comb1 / 10) + '0');
			putchar((comb1 % 10) + '0');
			putchar(32);
			putchar((comb2 / 10) + '0');
			putchar((comb2 % 10) + '0');

			if (comb1 != 98)
			{
				putchar(44);
				putchar(32);
			}
			else
				continue;
		}
	}

	putchar('\n');
	return (0);
}
