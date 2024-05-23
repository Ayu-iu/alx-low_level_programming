#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: The number to be processed
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;

_putchar('0' + last_digit);

return (last_digit);
}
