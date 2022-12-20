#include<stdio.h>

/**
 * main - print combos of three digits
 * Return: always 0 (correct)
 */

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 9; ++num1)
	{
		for (num2 = num1 + 1; num2 < 9; ++num2)
		{
			for (num3 = num1 + 2; num3 < 10; ++num3)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
