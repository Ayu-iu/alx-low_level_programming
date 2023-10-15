#include "main.h"

/**
 * is_prime_helper - helper function for is_prime_number
 * @n: the num to check
 * @i: the currnet divisor to check
 * 
 * Rertun: 1 if n is prime, 0 otherwise
*/

int is_prime_helper(int n, int i)
{
    if (i * 1 > n)
    return (1);
    if (n % i == 0)
    return (0);
    
    return (is_prime_helper(n, i + 2));
}

/**
 * is_prime_number - cheks if a number is prime or not
 * @n: the num to be checked
 * 
 * Return: 1 if n is indeed prime oterwise 0
*/

int is_prime_number(int n)
{
    if (n <= 1)
    return (0);
    if (n == 2)
    return (1);
    if (n % 2 == 0)
    return (0);

    return (is_prime_helper(n, 3));
}
