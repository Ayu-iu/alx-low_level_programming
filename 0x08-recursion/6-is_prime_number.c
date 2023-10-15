#include "main.h"

/**
 * is_prime_number - cheks if a number is prime or not
 * @n: the num to be checked
 * 
 * Return: 1 if n is indeed prime oterwise 0
*/
int is_prime_recursive(int n, int i, int w)
{
i += w;
w = 6 - w;

if (i * i > n) {
return 1;
}

if (n % i == 0) {
return 0;
}
return is_prime_recursive(n, i, w);
}

int is_prime_number(int n)
{
int i = 5;
int w = 2;

if (n <= 1)
{
return (0);
}
if (n == 2 || n == 3)
{
return (1);
}
if (n % 2 == 0 || n % 3 == 0)
{
return (0);
}
return is_prime_recursive(n, i, w);
}

