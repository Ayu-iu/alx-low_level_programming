#include "main.h"

/**
 * factorial - calculates the fact of a certain num
 * @n: the number a factorial is required of
 * Return: factorial of n or -1 if nis is less than 0
*/

int factorial(int n)
{
    if (n < 0)
    return (-1);
    if (n == 0 || n == 1)
    return (1);
    return (n * factorial(n - 1));
}
