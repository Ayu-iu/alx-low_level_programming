#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints a promt number to the number 98
 * @n: number to start with
 *
 * Return: list of nums from n to 98 in order
*/

void print_to_98(int n)
{
    int n;
    for (n >= 0 || n <=98; n++)
    {
        _putchar(n + '0');

        if (n < 98)
        {
            _putchar(", ");
        }
    }
    _putchar('\n');
}
