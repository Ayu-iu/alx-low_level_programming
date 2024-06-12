#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints a promt number to the number 98
 * @n: number to start with
 *
 * Return: void
*/

void print_to_98(int n)
{
int j;
for (j = n; j <= 98; j++)
{
_putchar(j + '0');

if (j < 98)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
